/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSData *)challenge;
-(void)setChallenge:(NSData *)arg1 ;
@end

