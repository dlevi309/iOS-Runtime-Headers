/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(id)resultBlock;
-(void)setResultBlock:(id)arg1 ;
-(void)_loadURLBag;
-(void)setPromptUser:(BOOL)arg1 ;
-(void)setTopicName:(NSString *)arg1 ;
-(BOOL)promptUser;
-(BOOL)_performOptInDialogOperationWithError:(id*)arg1 ;
-(BOOL)_performPasscodeDialogOperationWithError:(id*)arg1 ;
-(void)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(NSString *)topicName;
-(id)_newSourceByStartingTimeoutTimer;
-(void)_performOptInDialogMetricsWithResult:(BOOL)arg1 error:(id)arg2 ;
@end

