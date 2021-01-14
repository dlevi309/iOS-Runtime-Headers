/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKDiscoveryTrigger : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	long long _maxActivationCount;

}

@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long maxActivationCount;              //@synthesize maxActivationCount=_maxActivationCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)discoveryTriggerWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)maxActivationCount;
-(void)setMaxActivationCount:(long long)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

