/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface W5Peer : NSObject <NSCopying, NSSecureCoding> {

	BOOL _nearby;
	NSString* _peerID;
	NSString* _name;
	NSString* _model;
	NSString* _build;
	NSString* _os;
	NSString* _version;

}

@property (nonatomic,copy) NSString * peerID;               //@synthesize peerID=_peerID - In the implementation block
@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * model;                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * build;                //@synthesize build=_build - In the implementation block
@property (nonatomic,copy) NSString * os;                   //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) BOOL nearby;                   //@synthesize nearby=_nearby - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPeerID:(NSString *)arg1 ;
-(NSString *)model;
-(NSString *)build;
-(BOOL)nearby;
-(void)setBuild:(NSString *)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)peerID;
-(NSString *)name;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(BOOL)isEqualToPeer:(id)arg1 ;
-(void)setNearby:(BOOL)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

