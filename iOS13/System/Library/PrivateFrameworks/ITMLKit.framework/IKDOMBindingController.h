/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKJSDataObserving.h>

@protocol IKDOMBindingStrategy;
@class NSDictionary, NSMutableArray, IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, _IKDOMMutationRuleSet, NSString;

@interface IKDOMBindingController : NSObject <IKJSDataObserving> {

	NSDictionary* _bindingKeysByPathString;
	struct {
		BOOL hasKeysAffectingChildren;
		BOOL hasKeysAffectingSubtree;
		BOOL hasPrototypeDependentKeys;
		BOOL hasValueDidChangeForKey;
		BOOL hasDidResolveKeys;
	}  _strategyFlags;
	NSMutableArray* _scheduledUpdaters;
	IKAppContext* _appContext;
	IKDOMElement* _domElement;
	IKDOMBindingController* _parent;
	IKDataBinding* _binding;
	IKJSDataItem* _dataItem;
	id<IKDOMBindingStrategy> _strategy;
	_IKDOMMutationRuleSet* _mutationRuleSet;
	NSDictionary* _prototypeGroupsByType;
	unsigned long long _resolutionTarget;

}

@property (nonatomic,readonly) _IKDOMMutationRuleSet * mutationRuleSet;              //@synthesize mutationRuleSet=_mutationRuleSet - In the implementation block
@property (nonatomic,readonly) NSDictionary * prototypeGroupsByType;                 //@synthesize prototypeGroupsByType=_prototypeGroupsByType - In the implementation block
@property (nonatomic,readonly) unsigned long long resolutionTarget;                  //@synthesize resolutionTarget=_resolutionTarget - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                     //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                     //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMBindingController * parent;               //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                              //@synthesize binding=_binding - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataItem * dataItem;                       //@synthesize dataItem=_dataItem - In the implementation block
@property (nonatomic,readonly) id<IKDOMBindingStrategy> strategy;                    //@synthesize strategy=_strategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedBindingForDOMElement:(id)arg1 ;
+(id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4 ;
+(id)_parsedMutationRulesForDOMElement:(id)arg1 ;
+(id)_prototypeGroupsByTypeForDOMElement:(id)arg1 ;
+(void)prepareForDOMElement:(id)arg1 ;
+(id)domBindingControllerForDOMElement:(id)arg1 ;
-(void)dealloc;
-(IKDOMBindingController *)parent;
-(IKDataBinding *)binding;
-(id<IKDOMBindingStrategy>)strategy;
-(IKAppContext *)appContext;
-(IKDOMElement *)domElement;
-(id)initWithDOMElement:(id)arg1 ;
-(void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3 ;
-(void)scheduleUpdateUsingPreUpdate:(/*^block*/id)arg1 update:(/*^block*/id)arg2 ;
-(BOOL)_canBeReused;
-(void)_resolveBinding;
-(void)_evaluateMutationRules;
-(IKJSDataItem *)dataItem;
-(NSDictionary *)prototypeGroupsByType;
-(_IKDOMMutationRuleSet *)mutationRuleSet;
-(unsigned long long)resolutionTarget;
-(id)findPrototypeForDataItem:(id)arg1 ;
@end

