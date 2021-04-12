/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPiCloudSharingMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _applicationBundleIdenfier;
	NSString* _application;
	NSString* _title;
	_BlastDoorLPImage* _icon;

}

@property (nonatomic,copy) NSString * applicationBundleIdenfier;              //@synthesize applicationBundleIdenfier=_applicationBundleIdenfier - In the implementation block
@property (nonatomic,copy) NSString * application;                            //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                        //@synthesize icon=_icon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)setApplication:(NSString *)arg1 ;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(NSString *)applicationBundleIdenfier;
-(void)setApplicationBundleIdenfier:(NSString *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)application;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

