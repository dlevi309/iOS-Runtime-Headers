/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudFamilyInvitationMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _title;
	NSString* _subtitle;
	NSString* _action;
	NSString* _kind;
	_BlastDoorLPImage* _image;
	_BlastDoorLPImage* _icon;

}

@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * kind;                          //@synthesize kind=_kind - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;               //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(_BlastDoorLPImage *)icon;
-(NSString *)subtitle;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(_BlastDoorLPImage *)image;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

