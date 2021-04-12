/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)propertyForKey:(id)arg1 ;
-(void)setDelegate:(id<BiometricKitUIEnrollResultDelegate>)arg1 ;
-(void)cancelEnroll;
-(void)restartEnroll;
-(BiometricKit *)biometricKit;
-(void)setBiometricKit:(BiometricKit *)arg1 ;
@end

