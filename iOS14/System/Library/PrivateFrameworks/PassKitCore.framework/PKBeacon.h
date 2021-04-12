/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSNumber, NSString;

@interface PKBeacon : NSObject <NSSecureCoding> {

	NSUUID* _proximityUUID;
	NSNumber* _major;
	NSNumber* _minor;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSUUID * proximityUUID;               //@synthesize proximityUUID=_proximityUUID - In the implementation block
@property (nonatomic,retain) NSNumber * major;                     //@synthesize major=_major - In the implementation block
@property (nonatomic,retain) NSNumber * minor;                     //@synthesize minor=_minor - In the implementation block
@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setProximityUUID:(NSUUID *)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setProximityUUIDWithString:(id)arg1 ;
-(id)proximityUUIDAsString;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)minor;
-(NSString *)name;
-(NSUUID *)proximityUUID;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)major;
-(void)setMinor:(NSNumber *)arg1 ;
@end

