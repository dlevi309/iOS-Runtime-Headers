/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFCodableAttributeBackedParameter.h>

@protocol WFDynamicResolveParameterDataSource, WFDynamicResolveParameterDelegate;
@class INCodableAttribute, NSString;

@interface WFDynamicResolveParameter : WFParameter <WFCodableAttributeBackedParameter> {

	INCodableAttribute* _codableAttribute;
	id<WFDynamicResolveParameterDataSource> _dataSource;
	id<WFDynamicResolveParameterDelegate> _delegate;

}

@property (nonatomic,retain) INCodableAttribute * codableAttribute;                                  //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WFDynamicResolveParameterDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<WFDynamicResolveParameterDelegate>)delegate;
-(void)setDelegate:(id<WFDynamicResolveParameterDelegate>)arg1 ;
-(id<WFDynamicResolveParameterDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicResolveParameterDataSource>)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(INCodableAttribute *)codableAttribute;
-(Class)singleStateClass;
-(id)localizedLabelForState:(id)arg1 ;
-(void)setCodableAttribute:(INCodableAttribute *)arg1 ;
-(void)resolveOptionsForUserInput:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)endResolutionSession;
-(void)localizedDisambiguationPromptForItems:(id)arg1 intent:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

