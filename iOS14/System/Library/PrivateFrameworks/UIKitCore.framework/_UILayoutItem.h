/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_contentWidthVariable;
-(id)nsli_contentWidthVariable;
-(id)_contentHeightVariable;

@required
-(id)_minYVariable;
-(id)nsli_minYVariable;
-(NSLayoutYAxisAnchor *)topAnchor;
-(id)_minXVariable;
-(BOOL)_uili_isFocusGuide;
-(id)nsli_boundsWidthVariable;
-(NSLayoutXAxisAnchor *)leftAnchor;
-(NSLayoutDimension *)widthAnchor;
-(NSLayoutYAxisAnchor *)bottomAnchor;
-(NSLayoutXAxisAnchor *)rightAnchor;
-(id)_boundsWidthVariable;
-(void)_faultInGuidesForConstraint:(id)arg1;
-(NSLayoutXAxisAnchor *)centerXAnchor;
-(NSLayoutXAxisAnchor *)leadingAnchor;
-(NSLayoutYAxisAnchor *)centerYAnchor;
-(BOOL)_uili_requiresObservationForVariable:(id)arg1;
-(NSLayoutXAxisAnchor *)trailingAnchor;
-(id)_uili_existingBaseFrameVariables;
-(id)_uili_observableLayoutEngineForBaseFrameVariables:(BOOL)arg1;
-(id)_uili_existingObservationEligibleLayoutVariables;
-(void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(BOOL)arg1;
-(BOOL)nsli_defaultResolvedValue:(double*)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id*)arg4;
-(NSLayoutDimension *)heightAnchor;
-(id)nsli_heightVariable;
-(void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
-(id)nsli_widthVariable;
-(id)nsli_boundsHeightVariable;
-(void*)_referenceView;
-(id)nsli_minXVariable;
-(id)_boundsHeightVariable;

@end

