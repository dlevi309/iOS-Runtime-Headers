/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setCurrentState:(id)arg1 ;
-(id<TVRCKeyboardControllerDelegate>)delegate;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEditing;
-(TVRCKeyboardAttributes *)attributes;
-(void)setDelegate:(id<TVRCKeyboardControllerDelegate>)arg1 ;
-(NSString *)text;
-(id)_initWithDevice:(id)arg1 ;
-(void)sendReturnKey;
@end

