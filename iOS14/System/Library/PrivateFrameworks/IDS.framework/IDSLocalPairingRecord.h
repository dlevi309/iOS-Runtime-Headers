/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject <NSSecureCoding> {

	NSDictionary* _protectionClassIdentityDataMap;

}

@property (nonatomic,retain) NSDictionary * protectionClassIdentityDataMap;              //@synthesize protectionClassIdentityDataMap=_protectionClassIdentityDataMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)protectionClassIdentityDataMap;
-(id)identityDataForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3 ;
-(void)setProtectionClassIdentityDataMap:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

