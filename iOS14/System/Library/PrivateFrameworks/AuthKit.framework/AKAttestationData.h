/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AKAttestationData : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _attestationHeaders;

}

@property (nonatomic,copy) NSDictionary * attestationHeaders;              //@synthesize attestationHeaders=_attestationHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)attestationHeaders;
-(void)setAttestationHeaders:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

