/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)major;
-(NSNumber *)minor;
-(NSUUID *)proximityUUID;
-(void)setProximityUUID:(NSUUID *)arg1 ;
-(void)setMajor:(NSNumber *)arg1 ;
-(void)setMinor:(NSNumber *)arg1 ;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setProximityUUIDWithString:(id)arg1 ;
-(id)proximityUUIDAsString;
@end

