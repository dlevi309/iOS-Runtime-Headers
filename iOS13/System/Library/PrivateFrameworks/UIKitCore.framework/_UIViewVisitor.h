/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIViewVisitor : NSObject {

	BOOL _visitMaskViews;
	BOOL _tracksHierarchy;
	BOOL __currentlyVisitingHierarchy;
	unsigned long long _traversalDirection;

}

@property (assign,nonatomic) BOOL tracksHierarchy;                                 //@synthesize tracksHierarchy=_tracksHierarchy - In the implementation block
@property (assign,nonatomic) BOOL _currentlyVisitingHierarchy;                     //@synthesize _currentlyVisitingHierarchy=__currentlyVisitingHierarchy - In the implementation block
@property (nonatomic,readonly) unsigned long long traversalDirection;              //@synthesize traversalDirection=_traversalDirection - In the implementation block
@property (assign,nonatomic) BOOL visitMaskViews;                                  //@synthesize visitMaskViews=_visitMaskViews - In the implementation block
+(void)_addHierarchyTrackingVisitor:(id)arg1 ;
+(void)_removeHierarchyTrackingVisitor:(id)arg1 ;
+(void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2 ;
-(void)setVisitMaskViews:(BOOL)arg1 ;
-(id)initWithTraversalDirection:(unsigned long long)arg1 ;
-(unsigned long long)traversalDirection;
-(void)setTracksHierarchy:(BOOL)arg1 ;
-(BOOL)tracksHierarchy;
-(BOOL)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5 ;
-(void)set_currentlyVisitingHierarchy:(BOOL)arg1 ;
-(BOOL)_visitView:(id)arg1 ;
-(BOOL)visitMaskViews;
-(BOOL)_currentlyVisitingHierarchy;
@end

