/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <BiometricKitUI/BiometricKitDelegate.h>

@protocol BiometricKitUIEnrollResultDelegate;
@class NSMutableDictionary, BiometricKit, NSString;

@interface BiometricKitUIEnrollViewController : UIViewController <BiometricKitDelegate> {

	NSMutableDictionary* _properties;
	BiometricKit* _biometricKit;
	id<BiometricKitUIEnrollResultDelegate> _delegate;

}

@property (nonatomic,retain) BiometricKit * biometricKit;                                  //@synthesize biometricKit=_biometricKit - In the implementation block
@property (assign,nonatomic) id<BiometricKitUIEnrollResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BiometricKitUIEnrollResultDelegate>)delegate;
-(void)setDelegate:(id<BiometricKitUIEnrollResultDelegate>)arg1 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
-(void)restartEnroll;
-(void)cancelEnroll;
-(BiometricKit *)biometricKit;
@end

