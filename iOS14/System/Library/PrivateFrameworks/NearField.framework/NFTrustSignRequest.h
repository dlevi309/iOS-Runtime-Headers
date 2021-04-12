/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFTrustObject.h>

@class NSData;

@interface NFTrustSignRequest : NFTrustObject {

	NSData* _challenge;
	NSData* _data;

}

@property (nonatomic,retain) NSData * challenge;              //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain) NSData * data;                   //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)signRequestWithChallenge:(id)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setChallenge:(NSData *)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)challenge;
@end

