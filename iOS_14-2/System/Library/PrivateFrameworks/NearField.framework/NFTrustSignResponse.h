/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>

@class NSNumber, NFTrustKey, NSData, NSString;

@interface NFTrustSignResponse : NFTrustObject {

	NSNumber* _counterValue;
	NFTrustKey* _key;
	NSData* _trustObjectInternalRawNSData;

}

@property (nonatomic,retain) NSData * trustObjectInternalRawNSData;              //@synthesize trustObjectInternalRawNSData=_trustObjectInternalRawNSData - In the implementation block
@property (nonatomic,retain) NSNumber * counterValue;                            //@synthesize counterValue=_counterValue - In the implementation block
@property (nonatomic,readonly) NSString * rawData; 
@property (nonatomic,retain) NFTrustKey * key;                                   //@synthesize key=_key - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)signResponseWithRawData:(id)arg1 counterValueData:(id)arg2 ;
-(NSString *)rawData;
-(void)encodeWithCoder:(id)arg1 ;
-(NFTrustKey *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NFTrustKey *)arg1 ;
-(NSNumber *)counterValue;
-(void)setCounterValue:(NSNumber *)arg1 ;
-(NSData *)trustObjectInternalRawNSData;
-(void)setTrustObjectInternalRawNSData:(NSData *)arg1 ;
@end

