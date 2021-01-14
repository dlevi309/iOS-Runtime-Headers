/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRoundsToScreenScale:(BOOL)arg1 ;
-(BOOL)layoutRTL;
-(BOOL)roundsToScreenScale;
-(void)setInvalidationContextClass:(Class)arg1 ;
-(void)setLayoutRTL:(BOOL)arg1 ;
-(id)decorationRegistrationHandler;
-(double)interSectionSpacing;
-(void)setGlobalSupplementaryItems:(NSArray *)arg1 ;
-(void)setInterSectionSpacing:(double)arg1 ;
-(void)setDecorationRegistrationHandler:(id)arg1 ;
-(Class)layoutAttributesClass;
-(Class)invalidationContextClass;
-(NSArray *)globalSupplementaryItems;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setLayoutAttributesClass:(Class)arg1 ;
@end

