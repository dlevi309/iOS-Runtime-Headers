/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetProvider.h>

@class PUSearchZeroKeywordDataSource;

@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider {

	PUSearchZeroKeywordDataSource* _zeroKeywordDataSource;
	long long _sectionType;

}

@property (nonatomic,readonly) PUSearchZeroKeywordDataSource * zeroKeywordDataSource;              //@synthesize zeroKeywordDataSource=_zeroKeywordDataSource - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                              //@synthesize sectionType=_sectionType - In the implementation block
-(void)generateGadgets;
-(PUSearchZeroKeywordDataSource *)zeroKeywordDataSource;
-(unsigned long long)estimatedNumberOfGadgets;
-(long long)sectionType;
-(id)initWithZeroKeywordDataSource:(id)arg1 sectionType:(long long)arg2 ;
@end

