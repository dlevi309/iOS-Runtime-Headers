/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSURL *)frontFaceImageURL;
-(void)setFrontFaceImageURL:(NSURL *)arg1 ;
-(PKImage *)frontFaceImage;
-(void)setFrontFaceImage:(PKImage *)arg1 ;
-(unsigned long long)minimumEstimatedShippingTime;
-(unsigned long long)maximumEstimatedShippingTime;
-(long long)shippingTimeUnit;
-(BOOL)optionUnavailable;
@end

