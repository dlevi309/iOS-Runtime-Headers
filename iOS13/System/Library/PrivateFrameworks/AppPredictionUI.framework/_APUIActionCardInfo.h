/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@class NSString, SFImage, SFActionItem, SFPunchout;

@interface _APUIActionCardInfo : NSObject {

	NSString* _title;
	NSString* _subtitle;
	NSString* _footnote;
	NSString* _bundleId;
	NSString* _appTitle;
	SFImage* _image;
	SFActionItem* _actionItem;
	SFPunchout* _actionPunchout;

}

@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * footnote;                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,retain) NSString * bundleId;                      //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,retain) NSString * appTitle;                      //@synthesize appTitle=_appTitle - In the implementation block
@property (nonatomic,retain) SFImage * image;                          //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) SFActionItem * actionItem;                //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,retain) SFPunchout * actionPunchout;              //@synthesize actionPunchout=_actionPunchout - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SFImage *)image;
-(void)setImage:(SFImage *)arg1 ;
-(NSString *)subtitle;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(SFActionItem *)actionItem;
-(void)setActionItem:(SFActionItem *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)appTitle;
-(void)setAppTitle:(NSString *)arg1 ;
-(SFPunchout *)actionPunchout;
-(void)setActionPunchout:(SFPunchout *)arg1 ;
@end

