/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSArray, NSMutableDictionary, NSMutableArray;

@interface FPFootprint : NSObject {

	NSArray* _processes;
	NSMutableDictionary* _pidToFootprint;
	CFDictionaryRef _memoryObjects;
	CFDictionaryRef _sharedCache64MemoryObjects;
	CFDictionaryRef _sharedCache32MemoryObjects;
	CFDictionaryRef _textMemoryObjects;
	CFDictionaryRef _linkeditMemoryObjects;
	NSMutableArray* _uniqueMemoryObjects;
	NSMutableArray* _outputFormatters;
	BOOL _earlyExit;

}

@property (nonatomic,readonly) NSArray * processes;              //@synthesize processes=_processes - In the implementation block
+(void)setBreakDownPhysFootprint:(BOOL)arg1 ;
+(void)setSharingAnalysisDisabled:(BOOL)arg1 ;
+(void)_totalForCategories:(id)arg1 outTotal:(SCD_Struct_FP0*)arg2 ;
+(BOOL)breakDownPhysFootprint;
+(BOOL)isSharingAnalysisDisabled;
+(id)_processesBySortingPidDesc:(id)arg1 ;
+(id)installCancelHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)cancel;
-(NSArray *)processes;
-(id)initWithProcesses:(id)arg1 ;
-(void)gatherData;
-(id)_categoriesForAllProcessesShouldSummarize:(BOOL)arg1 ;
-(void)_addProcess:(id)arg1 ;
-(void)finalizeObjects;
-(void)_buildProcessToFootprintMap;
-(id)_notHiddenProcesses;
-(id)_processesBySortingFootprint:(id)arg1 ;
-(void)printVmmapLikeOutputForProcesses:(id)arg1 ;
-(id)_sharingData;
-(id)_categoriesForObjects:(id)arg1 viewedByProcess:(id)arg2 hasProcessView:(BOOL*)arg3 summarize:(BOOL)arg4 ;
-(unsigned long long)_calculateFootprintForProcess:(id)arg1 ;
-(void)addOutputFormatter:(id)arg1 ;
-(void)printOutputVerbose:(BOOL)arg1 summarize:(BOOL)arg2 ;
@end

