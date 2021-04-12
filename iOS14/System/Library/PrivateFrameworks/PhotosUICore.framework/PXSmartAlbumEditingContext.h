/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSArray;


@protocol PXSmartAlbumEditingContext <NSObject>
@property (nonatomic,readonly) NSArray * conditionTypeValues; 
@property (nonatomic,readonly) NSArray * albumValues; 
@property (nonatomic,readonly) NSArray * cameraModels; 
@property (nonatomic,readonly) NSArray * lensModels; 
@property (nonatomic,readonly) NSArray * keywordValues; 
@property (nonatomic,readonly) NSArray * personNames; 
@required
-(id)apertureValuesWithFormatter:(id)arg1;
-(id)focalLengthValuesWithFormatter:(id)arg1;
-(id)ISOValuesWithFormatter:(id)arg1;
-(id)shutterSpeedValuesWithFormatter:(id)arg1;
-(NSArray *)conditionTypeValues;
-(NSArray *)albumValues;
-(NSArray *)cameraModels;
-(NSArray *)lensModels;
-(NSArray *)keywordValues;
-(NSArray *)personNames;

@end

