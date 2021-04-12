/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSString;

@interface NFPeerPaymentResponse : NSObject <NSSecureCoding> {

	NSData* _transactionData;
	NSDictionary* _certificates;
	NSString* _transactionIdentifier;

}

@property (nonatomic,readonly) NSData * transactionData;                      //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificates;                   //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,readonly) NSString * transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificates;
-(NSString *)transactionIdentifier;
-(NSData *)transactionData;
@end

