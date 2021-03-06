/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@class NSString, NSArray, UIImage;

@interface BPSAboutDetailViewController : OBTextWelcomeController {

	NSString* _headerString;
	NSString* _footerString;
	NSArray* _bullets;
	NSArray* _paragraphs;
	NSString* _titleString;
	UIImage* _headerGlyph;
	/*^block*/id _onDismiss;

}

@property (nonatomic,copy) id onDismiss;                           //@synthesize onDismiss=_onDismiss - In the implementation block
@property (nonatomic,retain) NSString * headerString;              //@synthesize headerString=_headerString - In the implementation block
@property (nonatomic,retain) NSString * footerString;              //@synthesize footerString=_footerString - In the implementation block
@property (nonatomic,retain) NSArray * bullets;                    //@synthesize bullets=_bullets - In the implementation block
@property (nonatomic,retain) NSArray * paragraphs;                 //@synthesize paragraphs=_paragraphs - In the implementation block
@property (nonatomic,retain) NSString * titleString;               //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) UIImage * headerGlyph;                //@synthesize headerGlyph=_headerGlyph - In the implementation block
-(id)init;
-(void)viewDidLoad;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(NSArray *)bullets;
-(void)setBullets:(NSArray *)arg1 ;
-(void)donePressed;
-(NSArray *)paragraphs;
-(UIImage *)headerGlyph;
-(NSString *)headerString;
-(NSString *)footerString;
-(void)presentWithController:(id)arg1 onDismiss:(/*^block*/id)arg2 ;
-(BOOL)contentViewIsInAdjustedScrollView;
-(void)presentWithController:(id)arg1 ;
-(void)setHeaderString:(NSString *)arg1 ;
-(void)setFooterString:(NSString *)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(void)setHeaderGlyph:(UIImage *)arg1 ;
-(id)onDismiss;
-(void)setOnDismiss:(id)arg1 ;
@end

