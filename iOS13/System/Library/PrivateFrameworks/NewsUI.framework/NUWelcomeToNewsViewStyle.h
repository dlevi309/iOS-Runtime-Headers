/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class UIImage, NSAttributedString;

@interface NUWelcomeToNewsViewStyle : NSObject {

	UIImage* _appIconImage;
	NSAttributedString* _titleAttributedString;
	NSAttributedString* _descriptionAttributedString;

}

@property (nonatomic,readonly) UIImage * appIconImage;                                             //@synthesize appIconImage=_appIconImage - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * titleAttributedString;                    //@synthesize titleAttributedString=_titleAttributedString - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * descriptionAttributedString;              //@synthesize descriptionAttributedString=_descriptionAttributedString - In the implementation block
-(id)init;
-(UIImage *)appIconImage;
-(NSAttributedString *)titleAttributedString;
-(NSAttributedString *)descriptionAttributedString;
-(id)createTitleAttributedString;
-(id)createDescriptionAttributedString;
@end

