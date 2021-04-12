/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, PKImage;

@interface PKPhysicalCardArtworkOption : NSObject <NSSecureCoding> {

	BOOL _optionUnavailable;
	NSString* _identifier;
	NSURL* _frontFaceImageURL;
	unsigned long long _minimumEstimatedShippingTime;
	unsigned long long _maximumEstimatedShippingTime;
	long long _shippingTimeUnit;
	PKImage* _frontFaceImage;

}

@property (nonatomic,copy) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSURL * frontFaceImageURL;                                      //@synthesize frontFaceImageURL=_frontFaceImageURL - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumEstimatedShippingTime;              //@synthesize minimumEstimatedShippingTime=_minimumEstimatedShippingTime - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumEstimatedShippingTime;              //@synthesize maximumEstimatedShippingTime=_maximumEstimatedShippingTime - In the implementation block
@property (nonatomic,readonly) long long shippingTimeUnit;                                   //@synthesize shippingTimeUnit=_shippingTimeUnit - In the implementation block
@property (nonatomic,readonly) BOOL optionUnavailable;                                       //@synthesize optionUnavailable=_optionUnavailable - In the implementation block
@property (nonatomic,retain) PKImage * frontFaceImage;                                       //@synthesize frontFaceImage=_frontFaceImage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)frontFaceImageURL;
-(void)setFrontFaceImageURL:(NSURL *)arg1 ;
-(PKImage *)frontFaceImage;
-(void)setFrontFaceImage:(PKImage *)arg1 ;
-(unsigned long long)minimumEstimatedShippingTime;
-(unsigned long long)maximumEstimatedShippingTime;
-(long long)shippingTimeUnit;
-(BOOL)optionUnavailable;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

