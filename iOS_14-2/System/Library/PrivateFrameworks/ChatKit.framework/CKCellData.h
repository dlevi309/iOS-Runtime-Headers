/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 withSubtitle:(id)arg3 ;
-(id)initWithImage:(id)arg1 withTitle:(id)arg2 ;
-(void)setIdentifer:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(NSString *)identifer;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

