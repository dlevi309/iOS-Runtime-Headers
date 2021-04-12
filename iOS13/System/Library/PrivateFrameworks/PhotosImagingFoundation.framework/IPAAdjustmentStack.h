/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IPAAdjustmentVersionInfo, NSArray;

@interface IPAAdjustmentStack : NSObject <NSCopying> {

	IPAAdjustmentVersionInfo* _versionInfo;
	NSArray* _adjustments;

}

@property (nonatomic,copy) IPAAdjustmentVersionInfo * versionInfo;              //@synthesize versionInfo=_versionInfo - In the implementation block
@property (nonatomic,copy) NSArray * adjustments;                               //@synthesize adjustments=_adjustments - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(IPAAdjustmentVersionInfo *)versionInfo;
-(NSArray *)adjustments;
-(void)setAdjustments:(NSArray *)arg1 ;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(BOOL)isEqualToAdjustmentStack:(id)arg1 ;
-(void)setVersionInfo:(IPAAdjustmentVersionInfo *)arg1 ;
@end

