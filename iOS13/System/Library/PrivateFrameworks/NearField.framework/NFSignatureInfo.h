/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,readonly) NSString * rsaCert;                                 //@synthesize rsaCert=_rsaCert - In the implementation block
@property (nonatomic,readonly) NSString * eccCert;                                 //@synthesize eccCert=_eccCert - In the implementation block
@property (nonatomic,readonly) NSString * eckaCert;                                //@synthesize eckaCert=_eckaCert - In the implementation block
@property (nonatomic,readonly) NSString * seid;                                    //@synthesize seid=_seid - In the implementation block
@property (nonatomic,readonly) NSString * platformId;                              //@synthesize platformId=_platformId - In the implementation block
@property (nonatomic,readonly) NSString * jsblCounter;                             //@synthesize jsblCounter=_jsblCounter - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;              //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)certificateVersion;
-(NSString *)rsaCert;
-(NSString *)eccCert;
-(NSString *)jsblCounter;
-(NSString *)platformId;
-(NSString *)seid;
-(NSString *)eckaCert;
@end

