/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NFTrustKey *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setKey:(NFTrustKey *)arg1 ;
-(NSString *)rawData;
-(NSNumber *)counterValue;
-(void)setCounterValue:(NSNumber *)arg1 ;
-(NSData *)trustObjectInternalRawNSData;
-(void)setTrustObjectInternalRawNSData:(NSData *)arg1 ;
@end

