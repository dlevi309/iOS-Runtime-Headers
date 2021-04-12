/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitleImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)titleImage;
-(NSString *)nextButtonTitle;
-(void)setNextButtonTitle:(NSString *)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hideToolbar;
-(void)setHideToolbar:(BOOL)arg1 ;
@end

