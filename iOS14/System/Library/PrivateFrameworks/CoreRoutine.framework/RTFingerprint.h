/*
* Generated on Thursday, January 14, 2021 at 2:23:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSArray;

@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	unsigned long long _settledState;
	NSDate* _start;
	NSArray* _accessPoints;

}

@property (nonatomic,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long settledState;              //@synthesize settledState=_settledState - In the implementation block
@property (nonatomic,readonly) NSDate * start;                               //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) NSArray * accessPoints;                       //@synthesize accessPoints=_accessPoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSDate *)start;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4 ;
-(id)description;
-(unsigned long long)settledState;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)accessPoints;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

