/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, ISURLBag, NSString;

@interface ISBiometricOptInOperation : ISOperation {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _promptUser;
	/*^block*/id _resultBlock;
	ISURLBag* _urlBag;
	NSString* _topicName;
	NSString* _userAgent;

}

@property (assign) BOOL promptUser; 
@property (copy) NSString * topicName;              //@synthesize topicName=_topicName - In the implementation block
@property (copy) NSString * userAgent;              //@synthesize userAgent=_userAgent - In the implementation block
@property (copy) id resultBlock; 
-(void)run;
-(id)init;
-(id)resultBlock;
-(NSString *)topicName;
-(void)setResultBlock:(id)arg1 ;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(void)_loadURLBag;
-(void)setPromptUser:(BOOL)arg1 ;
-(void)setTopicName:(NSString *)arg1 ;
-(BOOL)promptUser;
-(BOOL)_performOptInDialogOperationWithError:(id*)arg1 ;
-(BOOL)_performPasscodeDialogOperationWithError:(id*)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(id)_newSourceByStartingTimeoutTimer;
-(void)_performOptInDialogMetricsWithResult:(BOOL)arg1 error:(id)arg2 ;
@end

