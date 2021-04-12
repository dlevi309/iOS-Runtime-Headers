/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class UIImage, NSString;

@interface CKCellData : NSObject {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	NSString* _identifer;

}

@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * identifer;              //@synthesize identifer=_identifer - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 ;
-(NSString *)identifer;
-(void)setIdentifer:(NSString *)arg1 ;
@end

