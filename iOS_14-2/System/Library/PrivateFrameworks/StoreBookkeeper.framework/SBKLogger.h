/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSString, NSFileHandle, NSRegularExpression, NSLock;

@interface SBKLogger : NSObject {

	NSString* _auxPath;
	NSFileHandle* _fileHandle;
	NSString* _filter;
	NSString* _runtimeOverride;
	int _pid;
	NSString* _procName;
	NSRegularExpression* _runtimeOverrideRegex;
	NSLock* _lock;

}

@property (copy) NSString * filter;                       //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * runtimeOverride;              //@synthesize runtimeOverride=_runtimeOverride - In the implementation block
+(BOOL)verboseLoggingEnabled;
+(id)sharedLogger;
+(BOOL)debugLoggingEnabled;
-(void)setFilter:(NSString *)arg1 ;
-(NSString *)filter;
-(id)init;
-(void)logString:(id)arg1 ;
-(id)auxPath;
-(void)dealloc;
-(void)logFile:(const char*)arg1 lineNumber:(int)arg2 format:(id)arg3 ;
-(void)setRuntimeOverride:(NSString *)arg1 ;
-(NSString *)runtimeOverride;
-(void)setAuxPath:(id)arg1 ;
-(BOOL)shouldOverrideCondition:(id)arg1 file:(id)arg2 ;
-(void)logFunction:(const char*)arg1 format:(id)arg2 ;
-(void)addRuntimeOverride:(id)arg1 ;
-(void)removeRuntimeOverride:(id)arg1 ;
-(void)_updateSettingsFromPreferences:(id)arg1 ;
-(void)performLoggingBlock:(/*^block*/id)arg1 ;
@end

