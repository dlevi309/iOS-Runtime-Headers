/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTVisitHyperParameter, RTLocation, NSString;

@interface RTVisitPipelineModuleVisitCentroidUpdater : NSObject <RTVisitPipelineModule> {

	unsigned _invalidBinIndex;
	RTVisitHyperParameter* _hyperParameter;
	RTLocation* _referenceLocation;
	unsigned* _binCounts;
	unsigned long long _binCountsSize;

}

@property (nonatomic,readonly) RTVisitHyperParameter * hyperParameter;              //@synthesize hyperParameter=_hyperParameter - In the implementation block
@property (nonatomic,readonly) RTLocation * referenceLocation;                      //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (nonatomic,readonly) unsigned invalidBinIndex;                            //@synthesize invalidBinIndex=_invalidBinIndex - In the implementation block
@property (nonatomic,readonly) unsigned* binCounts;                                 //@synthesize binCounts=_binCounts - In the implementation block
@property (nonatomic,readonly) unsigned long long binCountsSize;                    //@synthesize binCountsSize=_binCountsSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)process:(id)arg1 ;
-(RTLocation *)referenceLocation;
-(id)initWithHyperParameter:(id)arg1 ;
-(RTVisitHyperParameter *)hyperParameter;
-(void)dealloc;
-(unsigned long long)modeBinIndex;
-(void)updateCountFromNorthing:(double)arg1 easting:(double)arg2 ;
-(id)modeWithReferenceLocation:(id)arg1 ;
-(unsigned)invalidBinIndex;
-(unsigned*)binCounts;
-(unsigned long long)binCountsSize;
@end

