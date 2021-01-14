/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSDate;

@interface _BlastDoorLPApplePhotosMomentMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _title;
	unsigned long long _photoCount;
	unsigned long long _videoCount;
	unsigned long long _otherItemCount;
	_BlastDoorLPImage* _keyPhoto;
	NSDate* _expirationDate;
	NSDate* _earliestAssetDate;
	NSDate* _latestAssetDate;

}

@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long photoCount;                  //@synthesize photoCount=_photoCount - In the implementation block
@property (assign,nonatomic) unsigned long long videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
@property (assign,nonatomic) unsigned long long otherItemCount;              //@synthesize otherItemCount=_otherItemCount - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * keyPhoto;                   //@synthesize keyPhoto=_keyPhoto - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) NSDate * earliestAssetDate;                       //@synthesize earliestAssetDate=_earliestAssetDate - In the implementation block
@property (nonatomic,copy) NSDate * latestAssetDate;                         //@synthesize latestAssetDate=_latestAssetDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)setKeyPhoto:(_BlastDoorLPImage *)arg1 ;
-(unsigned long long)photoCount;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)videoCount;
-(NSDate *)expirationDate;
-(void)setVideoCount:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(_BlastDoorLPImage *)keyPhoto;
-(void)setPhotoCount:(unsigned long long)arg1 ;
-(unsigned long long)otherItemCount;
-(void)setOtherItemCount:(unsigned long long)arg1 ;
-(NSDate *)earliestAssetDate;
-(void)setEarliestAssetDate:(NSDate *)arg1 ;
-(NSDate *)latestAssetDate;
-(void)setLatestAssetDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

