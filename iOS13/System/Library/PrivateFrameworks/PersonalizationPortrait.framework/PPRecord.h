/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

@class PPSource, NSString;


@protocol PPRecord
@property (nonatomic,readonly) PPSource * source; 
@property (nonatomic,readonly) double initialScore; 
@property (nonatomic,readonly) NSString * extractionOsBuild; 
@property (nonatomic,readonly) unsigned long long extractionAssetVersion; 
@required
-(PPSource *)source;
-(double)initialScore;
-(NSString *)extractionOsBuild;
-(unsigned long long)extractionAssetVersion;

@end

