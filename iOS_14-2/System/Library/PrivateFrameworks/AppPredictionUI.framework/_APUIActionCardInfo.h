/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(SFImage *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)bundleId;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(SFActionItem *)actionItem;
-(void)setActionItem:(SFActionItem *)arg1 ;
-(SFImage *)image;
-(void)setFootnote:(NSString *)arg1 ;
-(NSString *)footnote;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)appTitle;
-(void)setAppTitle:(NSString *)arg1 ;
-(SFPunchout *)actionPunchout;
-(void)setActionPunchout:(SFPunchout *)arg1 ;
@end

