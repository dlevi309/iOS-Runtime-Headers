/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFPeerPaymentEnrollmentRequest : NSObject <NSSecureCoding> {

	NSData* _alternateDSID;

}

@property (nonatomic,copy) NSData * alternateDSID;              //@synthesize alternateDSID=_alternateDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)alternateDSID;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAlternateDSID:(NSData *)arg1 ;
@end

