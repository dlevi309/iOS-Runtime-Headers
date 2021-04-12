/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDLayout.h>
#import <TSReading/TSDWrappable.h>

@class TSDWrapPolygon, TSDBezierPath, NSString;

@interface TSDDrawableLayout : TSDLayout <TSDWrappable> {

	TSDWrapPolygon* mCachedWrapPolygon;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasAlpha; 
-(void)dealloc;
-(void)invalidate;
-(void)setGeometry:(id)arg1 ;
-(BOOL)hasAlpha;
-(id)wrapPolygon;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(BOOL)isHTMLWrap;
-(int)wrapType;
-(int)wrapDirection;
-(int)wrapFitType;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)invalidateParentForWrap;
-(void)dragBy:(CGPoint)arg1 ;
-(void)invalidateExteriorWrap;
-(void)processChangedProperty:(int)arg1 ;
-(void)parentDidChange;
-(void)i_invalidateWrap;
-(id)i_computeWrapPathClosed:(BOOL)arg1 ;
-(id)i_externalWrapPath;
-(BOOL)allowsConnections;
-(BOOL)supportsInspectorPositioning;
@end

