/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXDOMAnalysis.h>

@class SXMutableConditionalObjectAnalysis, SXMutableNamespacedObjectReferences;

@interface SXMutableDOMAnalysis : SXDOMAnalysis

@property (nonatomic,copy) SXMutableConditionalObjectAnalysis * conditionalObjectAnalysis; 
@property (nonatomic,copy,readonly) SXMutableNamespacedObjectReferences * namespacedObjectReferences; 
-(void)removeComponent:(id)arg1 ;
-(void)removeComponentStyle:(id)arg1 component:(id)arg2 ;
-(void)removeComponentTextStyle:(id)arg1 component:(id)arg2 ;
-(void)removeTextStyle:(id)arg1 component:(id)arg2 ;
-(void)addComponent:(id)arg1 type:(id)arg2 role:(int)arg3 ;
-(void)addComponentStyle:(id)arg1 component:(id)arg2 ;
-(void)addComponentTextStyle:(id)arg1 component:(id)arg2 ;
-(void)addTextStyle:(id)arg1 component:(id)arg2 ;
-(void)addComponent:(id)arg1 parent:(id)arg2 ;
@end

