/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNRequestConfiguration.h>

@interface VNBurstAnalysisResultsRequestConfiguration : VNRequestConfiguration {

	BOOL _includeClusters;
	BOOL _includeAllImageIdentifiers;
	BOOL _includeAllImageStats;

}

@property (assign,nonatomic) BOOL includeClusters;                         //@synthesize includeClusters=_includeClusters - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageIdentifiers;              //@synthesize includeAllImageIdentifiers=_includeAllImageIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL includeAllImageStats;                    //@synthesize includeAllImageStats=_includeAllImageStats - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)includeClusters;
-(void)setIncludeClusters:(BOOL)arg1 ;
-(BOOL)includeAllImageIdentifiers;
-(void)setIncludeAllImageIdentifiers:(BOOL)arg1 ;
-(BOOL)includeAllImageStats;
-(void)setIncludeAllImageStats:(BOOL)arg1 ;
@end

