/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDetails:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)footer;
-(void)setImage:(UIImage *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(UIImage *)image;
-(NSString *)type;
-(NSString *)details;
-(NSURL *)imageURL;
-(NSString *)providerDescription;
-(void)setProviderDescription:(NSString *)arg1 ;
-(NSString *)usageNotice;
-(void)setUsageNotice:(NSString *)arg1 ;
@end

