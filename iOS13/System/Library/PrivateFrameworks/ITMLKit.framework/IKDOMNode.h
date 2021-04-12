/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSDOMNode.h>
#import <libobjc.A.dylib/_IKJSDOMNodeProxy.h>
#import <libobjc.A.dylib/_IKJSDOMNode.h>
#import <libobjc.A.dylib/IKJSDOMEventTarget.h>

@class NSString, IKDOMNodeList, IKDOMDocument, JSValue, JSManagedValue, NSMutableDictionary, NSHashTable, IKDOMNodeData;

@interface IKDOMNode : IKJSObject <NSObject, IKJSDOMNode, _IKJSDOMNodeProxy, _IKJSDOMNode, IKJSDOMEventTarget> {

	xmlNode* _nodePtr;
	JSManagedValue* _managedDataItem;
	JSManagedValue* _managedOwnerDocument;
	JSManagedValue* _managedParent;
	JSManagedValue* _managedChildNodeList;
	NSMutableDictionary* _eventListenersMap;
	NSHashTable* _domObservers;
	long long _ITMLID;
	JSManagedValue* _managedSelf;
	NSString* _identifier;

}

@property (nonatomic,retain) JSManagedValue * managedOwnerDocument;                //@synthesize managedOwnerDocument=_managedOwnerDocument - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedParent;                       //@synthesize managedParent=_managedParent - In the implementation block
@property (nonatomic,retain) JSManagedValue * managedChildNodeList;                //@synthesize managedChildNodeList=_managedChildNodeList - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * eventListenersMap;              //@synthesize eventListenersMap=_eventListenersMap - In the implementation block
@property (nonatomic,retain) NSHashTable * domObservers;                           //@synthesize domObservers=_domObservers - In the implementation block
@property (assign,nonatomic) long long ITMLID;                                     //@synthesize ITMLID=_ITMLID - In the implementation block
@property (nonatomic,retain,readonly) IKDOMNodeData * jsNodeData; 
@property (nonatomic,retain,readonly) JSManagedValue * managedSelf;                //@synthesize managedSelf=_managedSelf - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * nodeName; 
@property (nonatomic,retain) NSString * nodeValue; 
@property (nonatomic,readonly) long long nodeType; 
@property (nonatomic,__weak,readonly) IKDOMNode * parentNode; 
@property (nonatomic,retain,readonly) IKDOMNodeList * childNodes; 
@property (nonatomic,retain,readonly) IKDOMNode * firstChild; 
@property (nonatomic,retain,readonly) IKDOMNode * lastChild; 
@property (nonatomic,__weak,readonly) IKDOMNode * previousSibling; 
@property (nonatomic,__weak,readonly) IKDOMNode * nextSibling; 
@property (nonatomic,__weak,readonly) IKDOMDocument * ownerDocument; 
@property (nonatomic,retain) NSString * textContent; 
@property (assign,nonatomic,__weak) JSValue * dataItem; 
+(id)ITMLIDStringforITMLID:(unsigned long long)arg1 ;
+(void)handleNodeParentDidChange:(xmlNode*)arg1 ;
+(id)nodeWithAppContext:(id)arg1 nodePtr:(xmlNode*)arg2 ;
+(long long)ITMLIDForITMLIDString:(id)arg1 ;
+(void)handleNodeWillRelease:(xmlNode*)arg1 ;
+(id)_eventListenerMapKeyForType:(id)arg1 useCapture:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(IKDOMNode *)parentNode;
-(BOOL)contains:(id)arg1 ;
-(id)children;
-(IKDOMNode *)firstChild;
-(IKDOMNode *)nextSibling;
-(IKDOMDocument *)ownerDocument;
-(long long)nodeType;
-(BOOL)hasChildNodes;
-(id)removeChild:(id)arg1 ;
-(id)appendChild:(id)arg1 ;
-(NSString *)textContent;
-(void)setTextContent:(NSString *)arg1 ;
-(BOOL)isSameNode:(id)arg1 ;
-(IKDOMNode *)lastChild;
-(IKDOMNodeList *)childNodes;
-(IKDOMNode *)previousSibling;
-(id)firstElementChild;
-(BOOL)dispatchEvent:(id)arg1 ;
-(BOOL)clearUpdates;
-(NSString *)nodeValue;
-(NSString *)nodeName;
-(id)lastElementChild;
-(unsigned long long)childElementCount;
-(void)addEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 :(BOOL)arg3 ;
-(void)setNodeValue:(NSString *)arg1 ;
-(id)cloneNode:(BOOL)arg1 ;
-(BOOL)isEqualNode:(id)arg1 ;
-(id)insertBefore:(id)arg1 :(id)arg2 ;
-(id)replaceChild:(id)arg1 :(id)arg2 ;
-(void)setDataItem:(JSValue *)arg1 ;
-(void)enumerateEventListernersForType:(id)arg1 xmlAttribute:(id)arg2 phase:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)childNodesAsArray;
-(long long)ITMLID;
-(id)nodesForXPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithAppContext:(id)arg1 xmlNode:(xmlNode*)arg2 ;
-(xmlNode*)nodePtr;
-(IKDOMNodeData *)jsNodeData;
-(void)childrenUpdatedWithUpdatedChildNodes:(id)arg1 notify:(BOOL)arg2 ;
-(void)setITMLID:(long long)arg1 ;
-(void)updatedAndMark:(BOOL)arg1 notify:(BOOL)arg2 ;
-(id)performDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3 ;
-(JSManagedValue *)managedSelf;
-(id)ik_nodeWithId:(long long)arg1 ;
-(id)ik_nodesWithIds:(id)arg1 ;
-(id)toStringWithError:(id*)arg1 ;
-(void)addDOMObserver:(id)arg1 ;
-(BOOL)_enumerateNodesWithBlock:(/*^block*/id)arg1 ;
-(id)ik_pathsForSearchQuery:(id)arg1 compareOptions:(unsigned long long)arg2 currentPath:(id)arg3 ;
-(id)ik_nodePath;
-(JSValue *)dataItem;
-(void)adoptFeatureWithName:(id)arg1 fromDOMNode:(id)arg2 ;
-(id)getFeature:(id)arg1 :(id)arg2 ;
-(BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3 ;
-(NSMutableDictionary *)eventListenersMap;
-(void)setEventListenersMap:(NSMutableDictionary *)arg1 ;
-(void)_linkManagedObjects;
-(JSManagedValue *)managedParent;
-(JSManagedValue *)managedChildNodeList;
-(void)setManagedChildNodeList:(JSManagedValue *)arg1 ;
-(BOOL)_validateDOMOperation:(unsigned long long)arg1 newNode:(id)arg2 refNode:(id)arg3 ;
-(void)_unlinkManagedObjects;
-(void)_notifyUpdatesToDOMObservers;
-(void)_updatedAndMark:(BOOL)arg1 withDocument:(id)arg2 ;
-(void)_childrenUpdatedWithUpdatedChildNodes:(id)arg1 withDocument:(id)arg2 ;
-(xmlNode*)_appendNode:(xmlNode*)arg1 ;
-(xmlNode*)_insertNode:(xmlNode*)arg1 refNode:(xmlNode*)arg2 operation:(unsigned long long)arg3 ;
-(NSHashTable *)domObservers;
-(void)setDomObservers:(NSHashTable *)arg1 ;
-(void)setManagedParent:(JSManagedValue *)arg1 ;
-(JSManagedValue *)managedOwnerDocument;
-(void)setManagedOwnerDocument:(JSManagedValue *)arg1 ;
-(void)_markSubtreeUpdatesForAncestorsOfNode:(id)arg1 ;
-(id)asPrivateIKJSDOMNode;
-(void)enumerateEventListenersUsingBlock:(/*^block*/id)arg1 ;
-(void)removeDOMObserver:(id)arg1 ;
@end

