/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRCKeyboardControllerDelegate;
@class TVRCDevice, TVRCKeyboardAttributes, NSString;

@interface TVRCKeyboardController : NSObject {

	TVRCDevice* _device;
	BOOL _editing;
	TVRCKeyboardAttributes* _attributes;
	NSString* _text;
	id<TVRCKeyboardControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCKeyboardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (nonatomic,readonly) TVRCKeyboardAttributes * attributes; 
@property (nonatomic,copy) NSString * text; 
-(id<TVRCKeyboardControllerDelegate>)delegate;
-(void)setDelegate:(id<TVRCKeyboardControllerDelegate>)arg1 ;
-(TVRCKeyboardAttributes *)attributes;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(void)_setCurrentState:(id)arg1 ;
-(void)sendReturnKey;
-(id)_initWithDevice:(id)arg1 ;
@end

