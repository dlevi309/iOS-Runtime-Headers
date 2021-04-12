/*
* Generated on Thursday, January 14, 2021 at 2:20:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIFontDescriptor;


@protocol UIFontPicker <NSObject>
@property (nonatomic,retain) UIFontDescriptor * selectedFontDescriptor; 
@property (assign,nonatomic,__weak) id<UIFontPickerDelegate> delegate; 
@required
-(id<UIFontPickerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(UIFontDescriptor *)selectedFontDescriptor;
-(void)setSelectedFontDescriptor:(id)arg1;

@end

