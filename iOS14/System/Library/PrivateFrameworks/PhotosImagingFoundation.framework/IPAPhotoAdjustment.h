/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAAdjustment.h>

@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment {

	BOOL _enabled;
	NSString* _maskUUID;
	NSDictionary* _autoSettings;

}

@property (assign,nonatomic) BOOL enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * maskUUID;                      //@synthesize maskUUID=_maskUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * autoSettings;              //@synthesize autoSettings=_autoSettings - In the implementation block
-(BOOL)enabled;
-(NSString *)maskUUID;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)autoSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_debugDescriptionSuffix;
-(void)setMaskUUID:(NSString *)arg1 ;
-(void)setAutoSettings:(NSDictionary *)arg1 ;
@end

