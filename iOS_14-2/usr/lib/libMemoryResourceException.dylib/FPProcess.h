/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libMemoryResourceException.dylib
*/


#import <libMemoryResourceException.dylib/libMemoryResourceException.dylib-Structs.h>
@class NSMutableArray, NSString, NSArray, NSDictionary;

@interface FPProcess : NSObject {

	int _pid;
	BOOL _is64bit;
	BOOL _isTranslated;
	int _idleExitStatus;
	NSMutableArray* _errors;
	NSMutableArray* _warnings;
	NSMutableArray* _globalErrors;
	BOOL _hiddenFromDisplay;
	NSString* _name;
	NSArray* _memoryRegions;
	NSString* _displayString;
	unsigned long long _pageSize;

}

@property (assign,nonatomic) BOOL is64bit;                               //@synthesize is64bit=_is64bit - In the implementation block
@property (assign,nonatomic) BOOL isTranslated;                          //@synthesize isTranslated=_isTranslated - In the implementation block
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
+(id)allProcessesExcludingPids:(id)arg1 ;
+(id)pidsForStringDescriptions:(id)arg1 errors:(id*)arg2 ;
+(id)childPidsForPids:(id)arg1 ;
+(id)removeIdleExitCleanProcessesFrom:(id)arg1 ;
-(NSString *)displayString;
-(int)pid;
-(id)init;
-(BOOL)isTranslated;
-(unsigned long long)pageSize;
-(void)setDisplayString:(NSString *)arg1 ;
-(void)setPageSize:(unsigned long long)arg1 ;
-(NSString *)name;
-(BOOL)is64bit;
-(id)description;
-(id)errors;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)warnings;
-(BOOL)_isAlive;
-(void)gatherData;
-(id)initWithBsdInfo:(proc_bsdinfo*)arg1 ;
-(BOOL)_populateTask;
-(void)setMemoryRegions:(NSArray *)arg1 ;
-(unsigned long long)_gatherPageSize;
-(NSDictionary *)auxData;
-(int)idleExitStatus;
-(BOOL)breakDownPhysFootprint;
-(void)_addGlobalError:(id)arg1 ;
-(id)globalErrors;
-(id)asNumber;
-(void)setIs64bit:(BOOL)arg1 ;
-(void)setIsTranslated:(BOOL)arg1 ;
-(NSArray *)memoryRegions;
-(BOOL)hiddenFromDisplay;
-(void)setHiddenFromDisplay:(BOOL)arg1 ;
@end

