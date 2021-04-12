/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)containerSize;
-(long long)buttonCount;
-(UIEdgeInsets)edgeInsets;
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
-(CGSize)containerSize;
-(long long)buttonCount;
-(UIEdgeInsets)edgeInsets;
-(CGRect)actionButtonsViewFrame;
-(CGRect)imageContainerViewFrame;
-(id)initWithContainerSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 buttonCount:(long long)arg3 ;
-(CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1 ;
@end

