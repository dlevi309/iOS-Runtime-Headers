/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/IKJSDOMDocumentAppBridgeInternal.h>
#import <libobjc.A.dylib/IKStyleMediaQueryEvaluator.h>

@protocol IKAppDocumentDelegate;
@class NSMutableDictionary, NSMapTable, IKAppContext, IKDOMDocument, NSString, IKHeadElement, IKViewElement, NSError, NSDictionary, IKJSObject, IKViewElementStyleFactory, IKJSNavigationDocument;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator> {

	NSMutableDictionary* _mediaQueryCache;
	long long _implicitUpdatesStack;
	BOOL _parsingDOM;
	NSMapTable* _viewElementRegistry;
	BOOL _isViewElementRegistryDirty;
	BOOL _updated;
	BOOL _subtreeUpdated;
	BOOL _implicitlyUpdated;
	IKAppContext* _appContext;
	IKDOMDocument* _jsDocument;
	NSString* _identifier;
	IKHeadElement* _headElement;
	IKViewElement* _navigationBarElement;
	IKViewElement* _toolbarElement;
	IKViewElement* _templateElement;
	NSError* _error;
	id<IKAppDocumentDelegate> _delegate;
	double _impressionThreshold;
	double _impressionViewablePercentage;
	NSDictionary* _cachedSnapshotImpressionsMap;
	NSMutableDictionary* _impressions;
	IKJSObject* _owner;
	IKViewElementStyleFactory* _styleFactory;

}

@property (retain) NSString * identifier;                                                       //@synthesize identifier=_identifier - In the implementation block
@property (retain) IKViewElement * templateElement;                                             //@synthesize templateElement=_templateElement - In the implementation block
@property (retain) IKViewElement * navigationBarElement;                                        //@synthesize navigationBarElement=_navigationBarElement - In the implementation block
@property (retain) IKViewElement * toolbarElement;                                              //@synthesize toolbarElement=_toolbarElement - In the implementation block
@property (retain) IKHeadElement * headElement;                                                 //@synthesize headElement=_headElement - In the implementation block
@property (nonatomic,retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (assign,getter=isUpdated,nonatomic) BOOL updated;                                     //@synthesize updated=_updated - In the implementation block
@property (getter=isSubtreeUpdated) BOOL subtreeUpdated;                                        //@synthesize subtreeUpdated=_subtreeUpdated - In the implementation block
@property (assign,nonatomic) double impressionThreshold;                                        //@synthesize impressionThreshold=_impressionThreshold - In the implementation block
@property (assign,nonatomic) double impressionViewablePercentage;                               //@synthesize impressionViewablePercentage=_impressionViewablePercentage - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedSnapshotImpressionsMap;                       //@synthesize cachedSnapshotImpressionsMap=_cachedSnapshotImpressionsMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * impressions;                                 //@synthesize impressions=_impressions - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMDocument * jsDocument;                               //@synthesize jsDocument=_jsDocument - In the implementation block
@property (nonatomic,__weak,readonly) IKJSObject * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) IKViewElementStyleFactory * styleFactory;                          //@synthesize styleFactory=_styleFactory - In the implementation block
@property (nonatomic,readonly) id<IKNetworkRequestLoader> requestLoader; 
@property (getter=isImplicitlyUpdated,nonatomic,readonly) BOOL implicitlyUpdated;               //@synthesize implicitlyUpdated=_implicitlyUpdated - In the implementation block
@property (nonatomic,__weak,readonly) IKJSNavigationDocument * navigationDocument; 
@property (__weak,readonly) IKAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppDocumentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)debugDescription;
-(id<IKAppDocumentDelegate>)delegate;
-(void)setDelegate:(id<IKAppDocumentDelegate>)arg1 ;
-(NSString *)identifier;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(IKJSObject *)owner;
-(BOOL)isUpdated;
-(void)scrollToTop;
-(void)setUpdated:(BOOL)arg1 ;
-(NSMutableDictionary *)impressions;
-(void)setImpressions:(NSMutableDictionary *)arg1 ;
-(IKAppContext *)appContext;
-(IKDOMDocument *)jsDocument;
-(id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2 ;
-(id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3 extraInfo:(id)arg4 ;
-(void)_updateWithXML:(id)arg1 ;
-(IKViewElement *)templateElement;
-(IKJSNavigationDocument *)navigationDocument;
-(void)dispatchDocumentCallback:(id)arg1 eventType:(unsigned long long)arg2 ;
-(double)impressionThreshold;
-(void)onImpressionsChange:(id)arg1 ;
-(void)setCachedSnapshotImpressionsMap:(NSDictionary *)arg1 ;
-(void)_setViewElementStylesDirtyForced:(BOOL)arg1 ;
-(NSDictionary *)cachedSnapshotImpressionsMap;
-(id)recordedImpressions:(BOOL)arg1 ;
-(id)impressionsMatching:(id)arg1 reset:(BOOL)arg2 ;
-(void)recordedImpressionsMatching:(id)arg1 reset:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_viewElementForNodeID:(unsigned long long)arg1 ;
-(IKHeadElement *)headElement;
-(IKViewElement *)navigationBarElement;
-(IKViewElement *)toolbarElement;
-(IKViewElementStyleFactory *)styleFactory;
-(void)setStyleFactory:(IKViewElementStyleFactory *)arg1 ;
-(void)setHeadElement:(IKHeadElement *)arg1 ;
-(void)setNavigationBarElement:(IKViewElement *)arg1 ;
-(void)setToolbarElement:(IKViewElement *)arg1 ;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(void)setSubtreeUpdated:(BOOL)arg1 ;
-(void)setImpressionThreshold:(double)arg1 ;
-(void)setImpressionViewablePercentage:(double)arg1 ;
-(BOOL)isSubtreeUpdated;
-(void)setViewElementStylesDirty;
-(void)_resetImplicitUpdates;
-(BOOL)isImplicitlyUpdated;
-(void)updateForDocument:(id)arg1 ;
-(void)setNeedsUpdateForDocument:(id)arg1 ;
-(id)snapshotImpressions;
-(id)recordedImpressions;
-(void)recordedImpressions:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)runTestWithName:(id)arg1 options:(id)arg2 ;
-(BOOL)_isUpdateAllowed;
-(BOOL)evaluateStyleMediaQueryList:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3 ;
-(void)onLoad;
-(void)onUnload;
-(void)onAppear;
-(void)onDisappear;
-(void)onActive;
-(void)onInactive;
-(void)onNeedsUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)onUpdate;
-(void)onPerformanceMetricsChange:(id)arg1 ;
-(void)onViewAttributesChangeWithArguments:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)recordImpressionsForViewElements:(id)arg1 ;
-(void)snapshotImpressionsForViewElements:(id)arg1 ;
-(id<IKNetworkRequestLoader>)requestLoader;
-(id)viewElementForNodeID:(unsigned long long)arg1 ;
-(void)pushTrackingImplictUpdates;
-(void)popTrackingImplictUpdates;
-(BOOL)markImplicitlyUpdated;
-(double)impressionViewablePercentage;
@end

