/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/

#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
#import <libobjc.A.dylib/FPOutputFormatter.h>

@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSString;

@interface MREOutputFormatterInMemory : NSObject <FPOutputFormatter> {

	BOOL _isPageSizeSet;
	BOOL _verbose;
	NSMutableDictionary* _data;
	NSMutableArray* _processes;
	NSMutableSet* _addedProcessGroups;

}

@property (nonatomic,retain) NSMutableDictionary * data;                     //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableArray * processes;                     //@synthesize processes=_processes - In the implementation block
@property (nonatomic,retain) NSMutableSet * addedProcessGroups;              //@synthesize addedProcessGroups=_addedProcessGroups - In the implementation block
@property (assign,nonatomic) BOOL isPageSizeSet;                             //@synthesize isPageSizeSet=_isPageSizeSet - In the implementation block
@property (assign,nonatomic) BOOL verbose;                                   //@synthesize verbose=_verbose - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)data;
-(void)setData:(NSMutableDictionary *)arg1 ;
-(void)end;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(NSMutableArray *)processes;
-(void)setProcesses:(NSMutableArray *)arg1 ;
-(void)printSummaryCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2 hadErrors:(BOOL)arg3 ;
-(id)dataForCategories:(id)arg1 ;
-(void)printProcessHeader:(id)arg1 ;
-(void)endProcessHeader:(id)arg1 ;
-(void)printProcessTotal:(id)arg1 forProcess:(id)arg2 ;
-(void)printProcessCategories:(id)arg1 total:(SCD_Struct_FP0*)arg2 ;
-(void)printSharedCategories:(id)arg1 sharedWith:(id)arg2 forProcess:(id)arg3 hasProcessView:(BOOL)arg4 total:(SCD_Struct_FP0*)arg5 ;
-(void)printProcessAuxData:(id)arg1 ;
-(void)printProcessesWithWarnings:(id)arg1 processesWithErrors:(id)arg2 globalErrors:(id)arg3 ;
-(void)printGlobalAuxData:(id)arg1 ;
-(void)printVmmapLikeOutputForProcess:(id)arg1 regions:(id)arg2 ;
-(NSMutableSet *)addedProcessGroups;
-(void)setAddedProcessGroups:(NSMutableSet *)arg1 ;
-(BOOL)isPageSizeSet;
-(void)setIsPageSizeSet:(BOOL)arg1 ;
@end

