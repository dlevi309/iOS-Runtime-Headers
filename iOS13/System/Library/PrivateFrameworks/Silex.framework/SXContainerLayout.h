/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <libobjc.A.dylib/TSDWrappable.h>

@class TSDWrapPolygon, TSDBezierPath, NSMutableArray, NSString;

@interface SXContainerLayout : TSDContainerLayout <TSDWrappable> {

	TSDWrapPolygon* mCachedWrapPolygon;
	TSDBezierPath* mCachedWrapPath;
	TSDBezierPath* mCachedExternalWrapPath;
	NSMutableArray* _oldchildLayouts;

}

@property (nonatomic,retain) NSMutableArray * oldchildLayouts;              //@synthesize oldchildLayouts=_oldchildLayouts - In the implementation block
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
-(void)updateChildrenFromInfo;
-(BOOL)isHTMLWrap;
-(int)wrapType;
-(int)wrapDirection;
-(int)wrapFitType;
-(id)additionalLayouts;
-(id)childrenForLayout;
-(void)childLayoutCreated:(id)arg1 ;
-(id)i_exteriorTextWrap;
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
-(NSMutableArray *)oldchildLayouts;
-(void)setOldchildLayouts:(NSMutableArray *)arg1 ;
@end

