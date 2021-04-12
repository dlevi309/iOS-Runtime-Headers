/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class PUAssetsDataSource;

@interface PUContainedDataSourceInfo : NSObject {

	PUAssetsDataSource* _assetsDataSource;
	NSRange _externalSections;

}

@property (nonatomic,retain) PUAssetsDataSource * assetsDataSource;              //@synthesize assetsDataSource=_assetsDataSource - In the implementation block
@property (assign,nonatomic) NSRange externalSections;                           //@synthesize externalSections=_externalSections - In the implementation block
-(NSRange)externalSections;
-(void)setExternalSections:(NSRange)arg1 ;
-(id)description;
-(void)setAssetsDataSource:(PUAssetsDataSource *)arg1 ;
-(PUAssetsDataSource *)assetsDataSource;
@end

