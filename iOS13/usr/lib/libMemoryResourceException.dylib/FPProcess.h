/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSMutableArray, NSString, NSArray, NSDictionary;

@interface FPProcess : NSObject {

	int _pid;
	BOOL _is64bit;
	int _idleExitStatus;
	NSMutableArray* _errors;
	NSMutableArray* _warnings;
	BOOL _hiddenFromDisplay;
	NSString* _name;
	NSArray* _memoryRegions;
	NSString* _displayString;
	unsigned long long _pageSize;

}

@property (assign,nonatomic) BOOL is64bit;                               //@synthesize is64bit=_is64bit - In the implementation block
@property (nonatomic,retain) NSString * displayString;                   //@synthesize displayString=_displayString - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,retain) NSArray * memoryRegions;                    //@synthesize memoryRegions=_memoryRegions - In the implementation block
@property (assign,nonatomic) int pid;                                    //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) int idleExitStatus;                       //@synthesize idleExitStatus=_idleExitStatus - In the implementation block
@property (assign,nonatomic) BOOL hiddenFromDisplay;                     //@synthesize hiddenFromDisplay=_hiddenFromDisplay - In the implementation block
@property (nonatomic,readonly) NSDictionary * auxData; 
@property (nonatomic,readonly) BOOL breakDownPhysFootprint; 
+(id)_nameForBsdInfo:(proc_bsdinfo*)arg1 ;
+(id)processWithBsdInfo:(proc_bsdinfo*)arg1 ;
+(id)_nameForBsdInfoCommName:(proc_bsdinfo*)arg1 ;
+(id)processWithPid:(int)arg1 ;
+(void)_addGlobalError:(id)arg1 ;
+(void)_clearGlobalErrors;
+(id)globalErrors;
+(id)allProcessesExcludingPids:(id)arg1 ;
+(id)pidsForStringDescriptions:(id)arg1 errors:(id*)arg2 ;
+(id)childPidsForPids:(id)arg1 ;
+(id)removeIdleExitCleanProcessesFrom:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)errors;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
-(id)warnings;
-(unsigned long long)pageSize;
-(void)setPageSize:(unsigned long long)arg1 ;
-(BOOL)is64bit;
-(BOOL)_isAlive;
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(BOOL)_populateTask;
-(void)setMemoryRegions:(NSArray *)arg1 ;
-(unsigned long long)_gatherPageSize;
-(NSDictionary *)auxData;
-(int)idleExitStatus;
-(BOOL)breakDownPhysFootprint;
-(id)asNumber;
-(void)setIs64bit:(BOOL)arg1 ;
-(NSArray *)memoryRegions;
-(BOOL)hiddenFromDisplay;
-(void)setHiddenFromDisplay:(BOOL)arg1 ;
@end

