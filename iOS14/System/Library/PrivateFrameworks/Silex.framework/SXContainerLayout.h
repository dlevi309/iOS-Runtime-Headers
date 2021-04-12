/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) BOOL hasAlpha; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dragBy:(CGPoint)arg1 ;
-(void)setGeometry:(id)arg1 ;
-(void)invalidate;
-(int)wrapType;
-(BOOL)hasAlpha;
-(void)dealloc;
-(id)wrapPolygon;
-(CGRect)boundsInfluencingExteriorWrap;
-(CGRect)boundsInRoot;
-(void)updateChildrenFromInfo;
-(BOOL)isHTMLWrap;
-(int)wrapDirection;
-(int)wrapFitType;
-(id)additionalLayouts;
-(id)childrenForLayout;
-(void)childLayoutCreated:(id)arg1 ;
-(id)i_exteriorTextWrap;
-(id)i_computeWrapPath;
-(id)i_wrapPath;
-(void)invalidateParentForWrap;
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

