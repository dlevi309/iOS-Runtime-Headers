/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)reset;
-(void)addConfiguration:(id)arg1 ;
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

