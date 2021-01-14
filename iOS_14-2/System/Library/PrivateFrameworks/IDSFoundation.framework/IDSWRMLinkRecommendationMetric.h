/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTCoreAnalyticsMetric.h>

@class NSDictionary, NSString;

@interface IDSWRMLinkRecommendationMetric : NSObject <CUTCoreAnalyticsMetric> {

	unsigned _recommendedLinkType;
	unsigned _primaryLinkType;
	unsigned _magnetState;
	unsigned _infraWiFiState;

}

@property (nonatomic,readonly) unsigned recommendedLinkType;               //@synthesize recommendedLinkType=_recommendedLinkType - In the implementation block
@property (nonatomic,readonly) unsigned primaryLinkType;                   //@synthesize primaryLinkType=_primaryLinkType - In the implementation block
@property (nonatomic,readonly) unsigned magnetState;                       //@synthesize magnetState=_magnetState - In the implementation block
@property (nonatomic,readonly) unsigned infraWiFiState;                    //@synthesize infraWiFiState=_infraWiFiState - In the implementation block
@property (readonly) NSDictionary * dictionaryRepresentation; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)name;
-(unsigned)recommendedLinkType;
-(unsigned)primaryLinkType;
-(unsigned)magnetState;
-(unsigned)infraWiFiState;
-(id)initWithRecommendedLinkType:(unsigned)arg1 primaryLinkType:(unsigned)arg2 magnetState:(unsigned)arg3 infraWiFiState:(unsigned)arg4 ;
@end

