/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCBackgroundTaskable;
@class FCThreadSafeMutableDictionary;

@interface FCRemoteDefaults : NSObject {

	id<FCBackgroundTaskable> _backgroundTaskable;
	FCThreadSafeMutableDictionary* _remoteDefaults;

}

@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;              //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,readonly) FCThreadSafeMutableDictionary * remoteDefaults;                  //@synthesize remoteDefaults=_remoteDefaults - In the implementation block
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(BOOL)isAvailable;
-(id)URLRequest;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)checkForUpdate;
-(id)initWithBackgroundTaskable:(id)arg1 ;
-(void)updateRemoteDefaults;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(FCThreadSafeMutableDictionary *)remoteDefaults;
@end

