/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(BOOL)isIdentity;
-(NSString *)commonName;
-(id)initWithCommonName:(id)arg1 data:(id)arg2 isIdentity:(BOOL)arg3 ;
@end

