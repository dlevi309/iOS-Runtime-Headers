/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)start;
-(NSArray *)accessPoints;
-(id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4 ;
-(unsigned long long)settledState;
@end

