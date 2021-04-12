/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, IPAAdjustmentVersion, NSDictionary;

@interface IPAAdjustment : NSObject <NSCopying> {

	NSString* _identifier;
	IPAAdjustmentVersion* _version;
	NSDictionary* _settings;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) IPAAdjustmentVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDictionary * settings;                     //@synthesize settings=_settings - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(IPAAdjustmentVersion *)version;
-(void)setVersion:(IPAAdjustmentVersion *)arg1 ;
-(NSDictionary *)settings;
-(void)setSettings:(NSDictionary *)arg1 ;
-(id)_debugDescriptionSuffix;
-(BOOL)isEqualToAdjustment:(id)arg1 ;
@end

