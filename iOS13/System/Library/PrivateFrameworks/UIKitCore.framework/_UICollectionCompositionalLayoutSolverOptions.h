/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UICollectionCompositionalLayoutSolverOptions : NSObject {

	BOOL _layoutRTL;
	BOOL _roundsToScreenScale;
	double _interSectionSpacing;
	Class _layoutAttributesClass;
	Class _invalidationContextClass;
	/*^block*/id _invalidationHandler;
	NSArray* _globalSupplementaryItems;
	/*^block*/id _decorationRegistrationHandler;

}

@property (assign,nonatomic) double interSectionSpacing;                    //@synthesize interSectionSpacing=_interSectionSpacing - In the implementation block
@property (nonatomic,retain) Class layoutAttributesClass;                   //@synthesize layoutAttributesClass=_layoutAttributesClass - In the implementation block
@property (nonatomic,retain) Class invalidationContextClass;                //@synthesize invalidationContextClass=_invalidationContextClass - In the implementation block
@property (assign,nonatomic) BOOL layoutRTL;                                //@synthesize layoutRTL=_layoutRTL - In the implementation block
@property (assign,nonatomic) BOOL roundsToScreenScale;                      //@synthesize roundsToScreenScale=_roundsToScreenScale - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                          //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSArray * globalSupplementaryItems;              //@synthesize globalSupplementaryItems=_globalSupplementaryItems - In the implementation block
@property (nonatomic,copy) id decorationRegistrationHandler;                //@synthesize decorationRegistrationHandler=_decorationRegistrationHandler - In the implementation block
+(id)defaultOptions;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(BOOL)layoutRTL;
-(Class)invalidationContextClass;
-(double)interSectionSpacing;
-(void)setInterSectionSpacing:(double)arg1 ;
-(Class)layoutAttributesClass;
-(void)setLayoutAttributesClass:(Class)arg1 ;
-(void)setInvalidationContextClass:(Class)arg1 ;
-(BOOL)roundsToScreenScale;
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(void)setGlobalSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationRegistrationHandler:(id)arg1 ;
-(NSArray *)globalSupplementaryItems;
-(id)decorationRegistrationHandler;
@end

