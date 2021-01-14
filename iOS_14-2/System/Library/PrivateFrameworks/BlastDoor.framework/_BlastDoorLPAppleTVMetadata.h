/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPAppleTVMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _title;
	NSString* _subtitle;
	_BlastDoorLPImage* _artwork;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * artwork;              //@synthesize artwork=_artwork - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setArtwork:(_BlastDoorLPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(_BlastDoorLPImage *)artwork;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

