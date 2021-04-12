/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)_debugDescriptionSuffix;
-(void)setMaskUUID:(NSString *)arg1 ;
-(void)setAutoSettings:(NSDictionary *)arg1 ;
@end

