/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject <NSSecureCoding> {

	NSDictionary* _protectionClassIdentityDataMap;

}

@property (nonatomic,retain) NSDictionary * protectionClassIdentityDataMap;              //@synthesize protectionClassIdentityDataMap=_protectionClassIdentityDataMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)protectionClassIdentityDataMap;
-(id)identityDataForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3 ;
-(void)setProtectionClassIdentityDataMap:(NSDictionary *)arg1 ;
@end

