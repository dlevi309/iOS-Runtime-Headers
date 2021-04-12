/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)build;
-(BOOL)isEqualToPeer:(id)arg1 ;
-(NSString *)peerID;
-(void)setPeerID:(NSString *)arg1 ;
-(void)setOs:(NSString *)arg1 ;
-(NSString *)os;
-(void)setBuild:(NSString *)arg1 ;
-(BOOL)nearby;
-(void)setNearby:(BOOL)arg1 ;
@end

