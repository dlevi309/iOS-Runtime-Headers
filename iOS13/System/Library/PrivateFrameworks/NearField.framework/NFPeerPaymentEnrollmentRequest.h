/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NFPeerPaymentEnrollmentRequest : NSObject <NSSecureCoding> {

	NSData* _alternateDSID;

}

@property (nonatomic,copy) NSData * alternateDSID;              //@synthesize alternateDSID=_alternateDSID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)alternateDSID;
-(void)setAlternateDSID:(NSData *)arg1 ;
@end

