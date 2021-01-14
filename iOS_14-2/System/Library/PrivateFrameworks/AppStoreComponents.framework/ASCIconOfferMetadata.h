/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/

#import <AppStoreComponents/ASCOfferMetadata.h>

@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata {

	NSString* _imageName;
	NSString* _animationName;

}

@property (nonatomic,copy,readonly) NSString * imageName;                  //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * animationName;              //@synthesize animationName=_animationName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)imageName;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isIcon;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithImageName:(id)arg1 animationName:(id)arg2 ;
-(NSString *)animationName;
@end

