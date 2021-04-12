/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFFieldDetectSessionCallbacks.h>

@protocol NFFieldDetectSessionDelegate;
@class NSString;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {

	id<NFFieldDetectSessionDelegate> _delegate;
	BOOL _fieldNotificationSent;

}

@property (assign) id<NFFieldDetectSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFFieldDetectSessionDelegate>)delegate;
-(void)setDelegate:(id<NFFieldDetectSessionDelegate>)arg1 ;
-(void)didEndUnexpectedly;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
@end

