/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAvailable;
-(id)dictionaryForKey:(id)arg1 ;
-(id)init;
-(id)URLForKey:(id)arg1 ;
-(id)initWithBackgroundTaskable:(id)arg1 ;
-(void)updateRemoteDefaults;
-(FCThreadSafeMutableDictionary *)remoteDefaults;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)checkForUpdate;
-(id)stringForKey:(id)arg1 ;
-(id)URLRequest;
@end

