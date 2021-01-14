/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CHStrokeClutterFilter : NSObject <NSCopying> {

	NSDictionary* _CHStrokeID2HeatmapItemID;
	NSDictionary* _heatmapItemID2CHStrokeID;

}

@property (nonatomic,readonly) long long highDensityStrokeCount; 
-(id)debugQuickLookObject;
-(id)init;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithCanvasHeatmap:(CHCanvasHeatmap*)arg1 stroke2ItemMapping:(id)arg2 item2StrokeMapping:(id)arg3 ;
-(id)clutterFilterByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 affectedStrokeIdentifiers:(id*)arg3 ;
-(BOOL)isHighDensityStroke:(id)arg1 ;
-(long long)highDensityStrokeCount;
-(id)strokeIDsWithinRectangleRegion:(CGRect*)arg1 ;
@end

