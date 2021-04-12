/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString, NSURL;

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying> {

	UIColor* _fillColor;
	NSString* _identifier;
	NSString* _imageName;
	NSString* _imageTreatment;
	NSURL* _imageURL;
	NSString* _title;
	long long _userAffinityCount;

}

@property (nonatomic,copy) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * imageName;                       //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * imageTreatment;                  //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long userAffinityCount;              //@synthesize userAffinityCount=_userAffinityCount - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(UIColor *)fillColor;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)imageName;
-(void)setImageName:(NSString *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSURL *)imageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(long long)userAffinityCount;
-(void)setUserAffinityCount:(long long)arg1 ;
-(NSString *)imageTreatment;
-(void)setImageTreatment:(NSString *)arg1 ;
@end

