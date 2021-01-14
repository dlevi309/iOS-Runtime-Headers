/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding> {

	NSData* _transactionData;
	NSDictionary* _certificates;
	NSString* _transactionIdentifier;

}

@property (nonatomic,retain,readonly) NSData * transactionData;                      //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * certificates;                   //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,retain,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)certificates;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)transactionIdentifier;
-(NSData *)transactionData;
@end

