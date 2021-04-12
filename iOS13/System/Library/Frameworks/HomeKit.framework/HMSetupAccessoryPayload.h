/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSNumber* _flags;
	NSURL* _setupPayloadURL;

}

@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,retain) NSString * setupCode;                          //@synthesize setupCode=_setupCode - In the implementation block
@property (nonatomic,retain) NSString * setupID;                            //@synthesize setupID=_setupID - In the implementation block
@property (nonatomic,retain) NSNumber * categoryNumber;                     //@synthesize categoryNumber=_categoryNumber - In the implementation block
@property (assign,nonatomic) BOOL supportsIP;                               //@synthesize supportsIP=_supportsIP - In the implementation block
@property (assign,nonatomic) BOOL supportsWAC;                              //@synthesize supportsWAC=_supportsWAC - In the implementation block
@property (assign,nonatomic) BOOL supportsBTLE;                             //@synthesize supportsBTLE=_supportsBTLE - In the implementation block
@property (assign,nonatomic) BOOL paired;                                   //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) NSNumber * flags;                              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSURL * setupPayloadURL;                       //@synthesize setupPayloadURL=_setupPayloadURL - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * category; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)flags;
-(HMAccessoryCategory *)category;
-(NSString *)accessoryName;
-(void)setFlags:(NSNumber *)arg1 ;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(void)setAccessoryName:(NSString *)arg1 ;
-(BOOL)supportsIP;
-(BOOL)supportsWAC;
-(BOOL)supportsBTLE;
-(NSString *)setupCode;
-(NSString *)setupID;
-(NSNumber *)categoryNumber;
-(void)setSetupCode:(NSString *)arg1 ;
-(NSURL *)setupPayloadURL;
-(id)initWithSetupPayloadURL:(id)arg1 error:(id*)arg2 ;
-(void)setCategoryNumber:(NSNumber *)arg1 ;
-(id)_parseSetupPayload:(id)arg1 ;
-(void)setSupportsIP:(BOOL)arg1 ;
-(void)setSupportsBTLE:(BOOL)arg1 ;
-(void)setSupportsWAC:(BOOL)arg1 ;
-(void)setSetupID:(NSString *)arg1 ;
-(void)setSetupPayloadURL:(NSURL *)arg1 ;
-(id)initWithSetupCode:(id)arg1 ;
-(id)initWithSetupPayload:(id)arg1 ;
@end

