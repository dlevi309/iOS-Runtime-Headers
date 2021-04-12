/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFContactlessSessionCallbacks.h>

@protocol NFContactlessUICCSessionDelegate;
@class NSString;

@interface NFContactlessUICCSession : NFSession <NFContactlessSessionCallbacks> {

	BOOL _fieldNotificationSent;
	id<NFContactlessUICCSessionDelegate> _delegate;

}

@property (assign) id<NFContactlessUICCSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NFContactlessUICCSessionDelegate>)delegate;
-(void)setDelegate:(id<NFContactlessUICCSessionDelegate>)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didEndUnexpectedly;
-(void)didSelectApplet:(id)arg1 ;
@end

