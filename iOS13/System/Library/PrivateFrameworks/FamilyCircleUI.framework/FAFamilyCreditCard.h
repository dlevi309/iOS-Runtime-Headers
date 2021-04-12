/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@class NSString, NSURL, UIImage;

@interface FAFamilyCreditCard : NSObject {

	NSString* _details;
	NSString* _footer;
	NSString* _providerDescription;
	NSString* _type;
	NSString* _usageNotice;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * details;                          //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * footer;                           //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * providerDescription;              //@synthesize providerDescription=_providerDescription - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * usageNotice;                      //@synthesize usageNotice=_usageNotice - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)details;
-(void)setDetails:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)providerDescription;
-(void)setProviderDescription:(NSString *)arg1 ;
-(NSString *)usageNotice;
-(void)setUsageNotice:(NSString *)arg1 ;
@end

