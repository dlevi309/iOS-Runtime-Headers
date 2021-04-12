/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject {

	CHCanvasHeatmap* _heatMap;
	NSDictionary* _CHStrokeID2HeatmapItemID;
	NSDictionary* _heatmapItemID2CHStrokeID;

}

@property (nonatomic,readonly) long long highDensityStrokeCount; 
-(id)init;
-(void)dealloc;
-(id)debugQuickLookObject;
-(id)initWithCanvasHeatmap:(CHCanvasHeatmap*)arg1 stroke2ItemMapping:(id)arg2 item2StrokeMapping:(id)arg3 ;
-(id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id*)arg3 ;
-(BOOL)isHighDensityStroke:(id)arg1 ;
-(long long)highDensityStrokeCount;
@end

