/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSLayoutDimension;


@protocol _UILayoutItem <NSLayoutItem>
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leadingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * trailingAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * leftAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * rightAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * topAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * bottomAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * widthAnchor; 
@property (nonatomic,readonly) NSLayoutDimension * heightAnchor; 
@property (nonatomic,readonly) NSLayoutXAxisAnchor * centerXAnchor; 
@property (nonatomic,readonly) NSLayoutYAxisAnchor * centerYAnchor; 
@optional
-(id)nsli_contentHeightVariable;
-(id)nsli_contentWidthVariable;
-(id)_contentWidthVariable;
-(id)_contentHeightVariable;

@required
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)topAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutDimension *)heightAnchor;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(id)nsli_minYVariable;
-(id)nsli_boundsHeightVariable;
-(id)nsli_minXVariable;
-(void*)_referenceView;
-(id)nsli_boundsWidthVariable;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(BOOL)_uili_isFocusGuide;
-(id)_boundsWidthVariable;
-(id)_boundsHeightVariable;
-(id)_minXVariable;
-(id)_minYVariable;
-(void)_faultInGuidesForConstraint:(id)arg1;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1;
-(id)nsli_widthVariable;
-(id)nsli_heightVariable;

@end

