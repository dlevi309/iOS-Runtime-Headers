/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAnisetteData : NSObject <NSCopying, NSSecureCoding> {

	NSString* _machineID;
	NSString* _oneTimePassword;
	unsigned long long _routingInfo;

}

@property (nonatomic,copy) NSString * machineID;                          //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * oneTimePassword;                    //@synthesize oneTimePassword=_oneTimePassword - In the implementation block
@property (assign,nonatomic) unsigned long long routingInfo;              //@synthesize routingInfo=_routingInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)routingInfo;
-(void)setRoutingInfo:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOneTimePassword:(NSString *)arg1 ;
-(id)description;
-(void)setMachineID:(NSString *)arg1 ;
-(NSString *)oneTimePassword;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)machineID;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

