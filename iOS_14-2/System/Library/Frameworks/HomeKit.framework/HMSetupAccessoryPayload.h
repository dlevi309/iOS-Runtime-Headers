/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL, HMAccessoryCategory;

@interface HMSetupAccessoryPayload : NSObject <NSSecureCoding> {

	BOOL _supportsIP;
	BOOL _supportsWAC;
	BOOL _supportsBTLE;
	BOOL _paired;
	NSString* _accessoryName;
	NSString* _setupCode;
	NSString* _setupID;
	NSNumber* _categoryNumber;
	NSNumber* _threadIdentifier;
	NSString* _productData;
	NSString* _productNumber;
	NSURL* _setupPayloadURL;
	NSNumber* _flags;

}

@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSString * setupCode;                          //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,retain) NSString * setupID;                            //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,retain) NSNumber * categoryNumber;                     //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) BOOL supportsIP;                               //@synthesize supportsIP=_supportsIP - In the implementation block
@property (assign,nonatomic) BOOL supportsWAC;                              //@synthesize supportsWAC=_supportsWAC - In the implementation block
@property (assign,nonatomic) BOOL supportsBTLE;                             //@synthesize supportsBTLE=_supportsBTLE - In the implementation block
@property (nonatomic,retain) NSNumber * threadIdentifier;                   //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (nonatomic,retain) NSString * productData;                        //@synthesize productData=_productData - In the implementation block
@property (nonatomic,retain) NSString * productNumber;                      //@synthesize productNumber=_productNumber - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSURL * setupPayloadURL;                       //@synthesize setupPayloadURL=_setupPayloadURL - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * category; 
+(BOOL)supportsSecureCoding;
-(NSString *)accessoryName;
-(NSNumber *)threadIdentifier;
-(void)setPaired:(BOOL)arg1 ;
-(void)setThreadIdentifier:(NSNumber *)arg1 ;
-(BOOL)paired;
-(NSNumber *)categoryNumber;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(NSNumber *)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(HMAccessoryCategory *)category;
-(id)description;
-(NSString *)setupID;
-(NSURL *)setupPayloadURL;
-(id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2 ;
-(void)setFlags:(NSNumber *)arg1 ;
-(unsigned long long)hash;
-(NSString *)setupCode;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsIP;
-(BOOL)supportsBTLE;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)supportsWAC;
-(id)_parseSetupPayload:(id)arg1 ;
-(void)setSupportsIP:(BOOL)arg1 ;
-(void)setSupportsBTLE:(BOOL)arg1 ;
-(void)setSupportsWAC:(BOOL)arg1 ;
-(void)setSetupID:(NSString *)arg1 ;
-(void)setProductData:(NSString *)arg1 ;
-(void)setProductNumber:(NSString *)arg1 ;
-(void)setSetupPayloadURL:(NSURL *)arg1 ;
-(id)initWithSetupCode:(id)arg1 ;
-(id)initWithSetupPayload:(id)arg1 ;
-(NSString *)productData;
-(NSString *)productNumber;
-(void)setSetupCode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

