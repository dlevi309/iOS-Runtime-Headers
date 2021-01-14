/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugDescription;
-(void)setSettings:(NSDictionary *)arg1 ;
-(id)description;
-(NSDictionary *)settings;
-(void)setVersion:(IPAAdjustmentVersion *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(IPAAdjustmentVersion *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToAdjustment:(id)arg1 ;
-(id)_debugDescriptionSuffix;
@end

