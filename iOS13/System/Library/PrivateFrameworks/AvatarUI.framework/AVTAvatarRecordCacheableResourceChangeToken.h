/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTCacheableResourceChangeToken.h>

@class NSString, NSNotificationCenter;

@interface AVTAvatarRecordCacheableResourceChangeToken : NSObject <AVTCacheableResourceChangeToken> {

	NSString* _recordID;
	/*^block*/id _changeHandler;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,copy,readonly) NSString * recordID;                               //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) id changeHandler;                                  //@synthesize changeHandler=_changeHandler - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)recordID;
-(id)changeHandler;
-(NSNotificationCenter *)notificationCenter;
-(void)handleNotification:(id)arg1 ;
-(void)startObservingChanges;
-(void)stopObservingChanges;
-(id)initWithEnvironment:(id)arg1 recordIdentifier:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
@end

