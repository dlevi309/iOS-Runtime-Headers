/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/_TVRXKeyboardImpl.h>

@protocol _TVRCRMSDeviceKeyboardImplDelegate;
@class _TVRXKeyboardController, TVRMSKeyboardInfo, NSString;

@interface _TVRCRMSDeviceKeyboardImpl : NSObject <_TVRXKeyboardImpl> {

	BOOL _editing;
	_TVRXKeyboardController* _keyboardController;
	id<_TVRCRMSDeviceKeyboardImplDelegate> _delegate;
	TVRMSKeyboardInfo* _keyboardInfo;

}

@property (assign,nonatomic) BOOL editing;                                                        //@synthesize editing=_editing - In the implementation block
@property (nonatomic,retain) TVRMSKeyboardInfo * keyboardInfo;                                    //@synthesize keyboardInfo=_keyboardInfo - In the implementation block
@property (assign,nonatomic,__weak) _TVRXKeyboardController * keyboardController;                 //@synthesize keyboardController=_keyboardController - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRCRMSDeviceKeyboardImplDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_TVRCRMSDeviceKeyboardImplDelegate>)delegate;
-(void)setDelegate:(id<_TVRCRMSDeviceKeyboardImplDelegate>)arg1 ;
-(id)attributes;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)editing;
-(_TVRXKeyboardController *)keyboardController;
-(void)setKeyboardController:(_TVRXKeyboardController *)arg1 ;
-(void)sendReturnKey;
-(void)keyboardSessionBegan:(id)arg1 ;
-(void)keyboardSessionEnded:(id)arg1 ;
-(void)keyboardSessionUpdatedEditingInfo:(id)arg1 ;
-(id)_attributesForKeyboardInfo:(id)arg1 ;
-(long long)_keyboardTypeForInfo:(id)arg1 ;
-(TVRMSKeyboardInfo *)keyboardInfo;
-(void)setKeyboardInfo:(TVRMSKeyboardInfo *)arg1 ;
@end

