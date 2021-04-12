/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_action:(id)arg1 changedToEnabled:(BOOL)arg2 ;
-(void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2 ;
-(void)_action:(id)arg1 updatedImageTintColor:(id)arg2 ;
-(void)_action:(id)arg1 changedToTitle:(id)arg2 ;
-(UIAlertAction *)underlyingAlertAction;
-(id)leadingImage;
-(id)classificationTitle;
-(void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2 ;
-(void)_action:(id)arg1 updatedTitleTextColor:(id)arg2 ;
-(BOOL)valid;
-(void)_action:(id)arg1 changedToChecked:(BOOL)arg2 ;
-(long long)type;
-(_UIAlertControllerActionView *)alertControllerActionView;
-(long long)_typeForDeterminingViewRepresentation;
-(void)invalidate;
-(void)_initializeStateFromUnderlyingAlertAction;
-(void)dealloc;
@end

