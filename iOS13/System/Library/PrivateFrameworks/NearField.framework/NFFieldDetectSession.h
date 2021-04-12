/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFFieldDetectSessionCallbacks.h>

@class NFWeakReference, NSString;

@interface NFFieldDetectSession : NFSession <NFFieldDetectSessionCallbacks> {

	NFWeakReference* _delegate;
	BOOL _fieldNotificationSent;

}

@property (assign) id<NFFieldDetectSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NFFieldDetectSessionDelegate>)delegate;
-(void)setDelegate:(id<NFFieldDetectSessionDelegate>)arg1 ;
-(void)didDetectField:(BOOL)arg1 ;
-(void)didDetectFieldNotification:(id)arg1 ;
-(void)didEndUnexpectedly;
@end

