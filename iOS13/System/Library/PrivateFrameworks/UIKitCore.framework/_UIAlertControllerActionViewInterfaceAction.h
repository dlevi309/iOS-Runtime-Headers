/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIInterfaceAction.h>
#import <UIKit/UIAlertActionMutablePropertyObservering.h>

@class UIAlertAction, _UIAlertControllerActionView, NSString;

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering> {

	UIAlertAction* _underlyingAlertAction;
	BOOL _valid;

}

@property (nonatomic,readonly) _UIAlertControllerActionView * alertControllerActionView; 
@property (nonatomic,readonly) UIAlertAction * underlyingAlertAction;                                 //@synthesize underlyingAlertAction=_underlyingAlertAction - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithAlertControllerActionView:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(long long)type;
-(long long)_typeForDeterminingViewRepresentation;
-(id)classificationTitle;
-(id)leadingImage;
-(void)_action:(id)arg1 changedToTitle:(id)arg2 ;
-(void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2 ;
-(void)_action:(id)arg1 changedToEnabled:(BOOL)arg2 ;
-(void)_action:(id)arg1 changedToChecked:(BOOL)arg2 ;
-(void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2 ;
-(void)_action:(id)arg1 updatedImageTintColor:(id)arg2 ;
-(void)_action:(id)arg1 updatedTitleTextColor:(id)arg2 ;
-(void)_initializeStateFromUnderlyingAlertAction;
-(_UIAlertControllerActionView *)alertControllerActionView;
-(UIAlertAction *)underlyingAlertAction;
-(BOOL)valid;
@end

