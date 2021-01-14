/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/


@protocol PXPlacesMapLayoutResult;
@class NSMutableArray;

@interface PXPlacesMapLayoutDiffer : NSObject {

	NSMutableArray* _changes;
	id<PXPlacesMapLayoutResult> _sourceLayoutResult;
	id<PXPlacesMapLayoutResult> _targetLayoutResult;

}

@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> sourceLayoutResult;              //@synthesize sourceLayoutResult=_sourceLayoutResult - In the implementation block
@property (nonatomic,readonly) id<PXPlacesMapLayoutResult> targetLayoutResult;              //@synthesize targetLayoutResult=_targetLayoutResult - In the implementation block
-(void)_computeChanges;
-(id)initWithSourceLayoutResult:(id)arg1 targetLayoutResult:(id)arg2 ;
-(id)computeChanges;
-(void)_addTargetLayoutItem:(id)arg1 ;
-(void)_removeSourceLayoutItem:(id)arg1 ;
-(void)_relateSourceLayoutItem:(id)arg1 withTargetLayoutItem:(id)arg2 ;
-(id<PXPlacesMapLayoutResult>)sourceLayoutResult;
-(id<PXPlacesMapLayoutResult>)targetLayoutResult;
@end

