/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSAttributedString;

@interface _BlastDoorLPApplePhotosStatusMetadata : _BlastDoorLPSpecializationMetadata {

	NSAttributedString* _status;

}

@property (nonatomic,copy) NSAttributedString * status;              //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(NSAttributedString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSAttributedString *)status;
@end

