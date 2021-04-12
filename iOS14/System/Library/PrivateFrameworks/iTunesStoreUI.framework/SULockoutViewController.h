/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIImage, NSBundle, NSString;

@interface SULockoutViewController : SUViewController {

	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * messageBody;                     //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSBundle * localizationBundle;              //@synthesize localizationBundle=_localizationBundle - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(void)setMessageBody:(NSString *)arg1 ;
-(UIImage *)image;
-(void)loadView;
-(void)setMessageTitle:(NSString *)arg1 ;
-(NSString *)messageTitle;
-(void)dealloc;
-(NSString *)messageBody;
-(id)copyArchivableContext;
-(NSBundle *)localizationBundle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
@end

