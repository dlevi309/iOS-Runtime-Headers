/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFSignatureInfo : NSObject <NSSecureCoding> {

	NSString* _rsaCert;
	NSString* _eccCert;
	NSString* _eckaCert;
	NSString* _seid;
	NSString* _platformId;
	NSString* _jsblCounter;
	unsigned long long _certificateVersion;

}

@property (nonatomic,retain,readonly) NSString * rsaCert;                          //@synthesize rsaCert=_rsaCert - In the implementation block
@property (nonatomic,retain,readonly) NSString * eccCert;                          //@synthesize eccCert=_eccCert - In the implementation block
@property (nonatomic,retain,readonly) NSString * eckaCert;                         //@synthesize eckaCert=_eckaCert - In the implementation block
@property (nonatomic,retain,readonly) NSString * seid;                             //@synthesize seid=_seid - In the implementation block
@property (nonatomic,retain,readonly) NSString * platformId;                       //@synthesize platformId=_platformId - In the implementation block
@property (nonatomic,retain,readonly) NSString * jsblCounter;                      //@synthesize jsblCounter=_jsblCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;              //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)seid;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)rsaCert;
-(NSString *)eccCert;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)jsblCounter;
-(NSString *)platformId;
-(unsigned long long)certificateVersion;
-(NSString *)eckaCert;
@end

