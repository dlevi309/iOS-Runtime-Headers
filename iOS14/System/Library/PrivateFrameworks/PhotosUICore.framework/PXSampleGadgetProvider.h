/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXGadgetProvider.h>

@interface PXSampleGadgetProvider : PXGadgetProvider {

	BOOL _hasLoadedData;
	unsigned long long _sampleGadgetType;
	double _minimumHeight;

}

@property (assign,nonatomic) unsigned long long sampleGadgetType;              //@synthesize sampleGadgetType=_sampleGadgetType - In the implementation block
@property (assign,nonatomic) double minimumHeight;                             //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (assign,nonatomic) BOOL hasLoadedData;                               //@synthesize hasLoadedData=_hasLoadedData - In the implementation block
+(id)defaultSampleGadgetProviders;
-(void)generateGadgets;
-(id)init;
-(double)minimumHeight;
-(void)loadDataForGadgets;
-(void)setMinimumHeight:(double)arg1 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(id)initWithIdentifier:(id)arg1 ;
-(id)initWithSampleGadgetType:(unsigned long long)arg1 minimumHeight:(double)arg2 ;
-(id)initWithSampleGadgetType:(unsigned long long)arg1 ;
-(unsigned long long)sampleGadgetType;
-(void)setSampleGadgetType:(unsigned long long)arg1 ;
-(BOOL)hasLoadedData;
-(void)setHasLoadedData:(BOOL)arg1 ;
@end

