/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSString, UIImage;

@interface NUPageStyle : NSObject {

	BOOL _hideToolbar;
	NSString* _title;
	UIImage* _titleImage;
	NSString* _nextButtonTitle;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                  //@synthesize titleImage=_titleImage - In the implementation block
@property (nonatomic,copy) NSString * nextButtonTitle;              //@synthesize nextButtonTitle=_nextButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL hideToolbar;                      //@synthesize hideToolbar=_hideToolbar - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setTitleImage:(UIImage *)arg1 ;
-(UIImage *)titleImage;
-(BOOL)hideToolbar;
-(NSString *)nextButtonTitle;
-(void)setNextButtonTitle:(NSString *)arg1 ;
-(void)setHideToolbar:(BOOL)arg1 ;
@end

