/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(IPAAdjustmentVersionInfo *)versionInfo;
-(id)debugDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)adjustments;
-(void)setAdjustments:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)minimumVersionForFormat:(id)arg1 ;
-(id)_debugDescriptionSuffix;
-(BOOL)isEqualToAdjustmentStack:(id)arg1 ;
-(void)setVersionInfo:(IPAAdjustmentVersionInfo *)arg1 ;
@end

