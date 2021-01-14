/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class IKDOMNode, NSMutableDictionary;

@interface IKDOMNodeData : NSObject {

	BOOL _updated;
	BOOL _childrenUpdated;
	BOOL _subtreeUpdated;
	BOOL _autoHighlightRead;
	BOOL _bindingParsed;
	BOOL _rulesParsed;
	BOOL _prototypesResolved;
	BOOL _dataResolved;
	IKDOMNode* _ownerJSNode;
	NSMutableDictionary* _featuresMap;

}

@property (assign,nonatomic,__weak) IKDOMNode * ownerJSNode;                                    //@synthesize ownerJSNode=_ownerJSNode - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * featuresMap;                                 //@synthesize featuresMap=_featuresMap - In the implementation block
@property (nonatomic,readonly) BOOL containsUpdates; 
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                     //@synthesize updated=_updated - In the implementation block
@property (assign,getter=isChildrenUpdated,nonatomic) BOOL childrenUpdated;                     //@synthesize childrenUpdated=_childrenUpdated - In the implementation block
@property (assign,getter=isSubtreeUpdated,nonatomic) BOOL subtreeUpdated;                       //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (assign,getter=isAutoHighlightRead,nonatomic) BOOL autoHighlightRead;                 //@synthesize autoHighlightRead=_autoHighlightRead - In the implementation block
@property (assign,getter=isBindingParsed,nonatomic) BOOL bindingParsed;                         //@synthesize bindingParsed=_bindingParsed - In the implementation block
@property (assign,getter=areRulesParsed,nonatomic) BOOL rulesParsed;                            //@synthesize rulesParsed=_rulesParsed - In the implementation block
@property (assign,getter=arePrototypesResolved,nonatomic) BOOL prototypesResolved;              //@synthesize prototypesResolved=_prototypesResolved - In the implementation block
@property (assign,getter=isDataResolved,nonatomic) BOOL dataResolved;                           //@synthesize dataResolved=_dataResolved - In the implementation block
+(id)jsNodeDataForNode:(id)arg1 ;
-(void)setUpdated:(BOOL)arg1 ;
-(BOOL)isUpdated;
-(id)featureForName:(id)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(BOOL)isSubtreeUpdated;
-(BOOL)isChildrenUpdated;
-(void)setChildrenUpdated:(BOOL)arg1 ;
-(void)setAutoHighlightRead:(BOOL)arg1 ;
-(void)setBindingParsed:(BOOL)arg1 ;
-(BOOL)containsUpdates;
-(void)setDataResolved:(BOOL)arg1 ;
-(void)setPrototypesResolved:(BOOL)arg1 ;
-(void)setRulesParsed:(BOOL)arg1 ;
-(void)setOwnerJSNode:(IKDOMNode *)arg1 ;
-(NSMutableDictionary *)featuresMap;
-(void)setFeaturesMap:(NSMutableDictionary *)arg1 ;
-(void)setFeature:(id)arg1 forName:(id)arg2 ;
-(IKDOMNode *)ownerJSNode;
-(BOOL)isAutoHighlightRead;
-(BOOL)isBindingParsed;
-(BOOL)areRulesParsed;
-(BOOL)arePrototypesResolved;
-(BOOL)isDataResolved;
@end

