/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPAssociatedApplicationMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _bundleIdentifier;
	_BlastDoorLPImage* _icon;
	NSString* _caption;
	NSString* _action;
	long long _clipAction;

}

@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * caption;                       //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * action;                        //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long clipAction;                   //@synthesize clipAction=_clipAction - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(long long)clipAction;
-(void)setClipAction:(long long)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

