/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface DMFCertificate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isIdentity;
	NSString* _commonName;
	NSData* _data;

}

@property (nonatomic,copy,readonly) NSString * commonName;              //@synthesize commonName=_commonName - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                      //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL isIdentity;                         //@synthesize isIdentity=_isIdentity - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)commonName;
-(id)description;
-(id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(BOOL)arg3 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

