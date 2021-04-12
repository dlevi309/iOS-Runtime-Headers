/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate;

@interface RTLocationOfInterestTransition : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _startDate;
	NSDate* _stopDate;
	NSUUID* _visitIdentifierOrigin;
	NSUUID* _visitIdentifierDestination;
	long long _modeOfTransportation;

}

@property (nonatomic,readonly) NSUUID * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * stopDate;                           //@synthesize stopDate=_stopDate - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierOrigin;                   //@synthesize visitIdentifierOrigin=_visitIdentifierOrigin - In the implementation block
@property (nonatomic,readonly) NSUUID * visitIdentifierDestination;              //@synthesize visitIdentifierDestination=_visitIdentifierDestination - In the implementation block
@property (nonatomic,readonly) long long modeOfTransportation;                   //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSDate *)startDate;
-(NSDate *)stopDate;
-(long long)modeOfTransportation;
-(NSUUID *)visitIdentifierOrigin;
-(NSUUID *)visitIdentifierDestination;
-(id)initWithIdentifier:(id)arg1 startDate:(id)arg2 stopDate:(id)arg3 visitIdentifierOrigin:(id)arg4 visitIdentifierDestination:(id)arg5 modeOfTransportation:(long long)arg6 ;
@end

