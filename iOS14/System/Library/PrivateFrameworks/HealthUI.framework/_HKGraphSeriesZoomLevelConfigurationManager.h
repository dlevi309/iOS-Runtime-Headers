/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class NSMutableDictionary, NSMutableArray;

@interface _HKGraphSeriesZoomLevelConfigurationManager : NSObject {

	NSMutableDictionary* _displayTypeIdentifierToConfiguration;
	NSMutableDictionary* _graphSeriesUUIDToConfiguration;
	NSMutableArray* _graphSeriesInOrderAdded;

}

@property (nonatomic,retain) NSMutableDictionary * displayTypeIdentifierToConfiguration;              //@synthesize displayTypeIdentifierToConfiguration=_displayTypeIdentifierToConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * graphSeriesUUIDToConfiguration;                    //@synthesize graphSeriesUUIDToConfiguration=_graphSeriesUUIDToConfiguration - In the implementation block
@property (nonatomic,retain) NSMutableArray * graphSeriesInOrderAdded;                                //@synthesize graphSeriesInOrderAdded=_graphSeriesInOrderAdded - In the implementation block
-(id)init;
-(void)addConfiguration:(id)arg1 ;
-(void)reset;
-(id)allDisplayTypes;
-(void)removeConfigurationForDisplayType:(id)arg1 ;
-(id)configurationForDisplayType:(id)arg1 ;
-(id)configurationForGraphSeries:(id)arg1 ;
-(id)allGraphSeries;
-(id)_displayTypeIdentifierForDisplayType:(id)arg1 ;
-(NSMutableDictionary *)displayTypeIdentifierToConfiguration;
-(void)setDisplayTypeIdentifierToConfiguration:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)graphSeriesUUIDToConfiguration;
-(void)setGraphSeriesUUIDToConfiguration:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)graphSeriesInOrderAdded;
-(void)setGraphSeriesInOrderAdded:(NSMutableArray *)arg1 ;
@end

