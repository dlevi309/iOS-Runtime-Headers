/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerActionsViewControllerLayout.h>

@protocol CNPhotoPickerActionsViewControllerLayout
@property (nonatomic,readonly) CGSize containerSize; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,readonly) long long buttonCount; 
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect imageContainerViewFrame; 
@required
-(UIEdgeInsets)edgeInsets;
-(CGSize)containerSize;
-(long long)buttonCount;
-(CGRect)actionButtonsViewFrame;
-(CGRect)imageContainerViewFrame;

@end


@interface CNPhotoPickerActionsViewControllerLayout : NSObject <CNPhotoPickerActionsViewControllerLayout> {

	long long _buttonCount;
	CGSize _containerSize;
	UIEdgeInsets _edgeInsets;

}

@property (nonatomic,readonly) CGSize containerSize;                        //@synthesize containerSize=_containerSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets edgeInsets;                     //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,readonly) long long buttonCount;                       //@synthesize buttonCount=_buttonCount - In the implementation block
@property (nonatomic,readonly) CGRect actionButtonsViewFrame; 
@property (nonatomic,readonly) CGRect imageContainerViewFrame; 
+(double)buttonHeight;
+(double)heightForButtonsViewWithButtonCount:(long long)arg1 ;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 buttonCount:(long long)arg3 ;
-(CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(CGSize)containerSize;
-(long long)buttonCount;
-(CGRect)actionButtonsViewFrame;
-(CGRect)imageContainerViewFrame;
@end

