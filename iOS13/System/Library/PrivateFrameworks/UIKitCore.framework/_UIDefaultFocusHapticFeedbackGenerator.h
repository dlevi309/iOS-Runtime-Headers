/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIFocusHapticFeedbackGenerator.h>

@class CARSessionStatus, CARInputDeviceTouchpad, NSString;

@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator> {

	CARSessionStatus* _sessionStatus;
	CARInputDeviceTouchpad* _currentTouchpad;
	unsigned long long _currentSenderID;

}

@property (nonatomic,retain) CARSessionStatus * sessionStatus;                      //@synthesize sessionStatus=_sessionStatus - In the implementation block
@property (nonatomic,retain) CARInputDeviceTouchpad * currentTouchpad;              //@synthesize currentTouchpad=_currentTouchpad - In the implementation block
@property (assign,nonatomic) unsigned long long currentSenderID;                    //@synthesize currentSenderID=_currentSenderID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CARSessionStatus *)sessionStatus;
-(void)performHapticFeedbackForFocusUpdateInContext:(id)arg1 ;
-(unsigned long long)currentSenderID;
-(void)setSessionStatus:(CARSessionStatus *)arg1 ;
-(CARInputDeviceTouchpad *)currentTouchpad;
-(void)setCurrentTouchpad:(CARInputDeviceTouchpad *)arg1 ;
-(void)setCurrentSenderID:(unsigned long long)arg1 ;
@end

