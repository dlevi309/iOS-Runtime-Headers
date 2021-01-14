/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

@class PPSource, NSString;


@protocol PPRecord
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) NSString * extractionOsBuild; 
@property (nonatomic,readonly) unsigned extractionAssetVersion; 
@required
-(unsigned)extractionAssetVersion;
-(NSString *)extractionOsBuild;
-(double)initialScore;
-(PPSource *)source;

@end

