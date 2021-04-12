/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSError, NSUUID;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSDate* _lastUpdated;
	NSError* _error;
	long long _state;
	NSUUID* _commandIdentifier;

}

@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDate * lastUpdated;                    //@synthesize lastUpdated=_lastUpdated - In the implementation block
@property (nonatomic,copy) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSUUID * commandIdentifier;              //@synthesize commandIdentifier=_commandIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastUpdated;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setLastUpdated:(NSDate *)arg1 ;
-(NSString *)name;
-(void)setCommandIdentifier:(NSUUID *)arg1 ;
-(id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4 ;
-(NSUUID *)commandIdentifier;
-(void)setState:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)state;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

