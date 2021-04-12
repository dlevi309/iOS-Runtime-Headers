/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSString, NSMutableDictionary, NSFileProviderProxy;

@interface NSFileAccessNode : NSObject {

	NSFileAccessNode* _parent;
	NSString* _name;
	NSString* _normalizedName;
	NSFileAccessNode* _symbolicLinkDestination;
	unsigned long long _symbolicLinkReferenceCount;
	NSMutableDictionary* _childrenByNormalizedName;
	id _presenterOrPresenters;
	NSFileProviderProxy* _provider;
	id _accessClaimOrClaims;
	BOOL _isArbitrationBoundary;
	BOOL _isFilePackageIsFigured;
	BOOL _isFilePackage;
	BOOL _symbolicLinkIsFirmlink;
	NSString* _lastRequestedChildName;
	NSFileAccessNode* _lastRequestedChild;
	id _progressPublisherOrPublishers;
	id _progressSubscriberOrSubscribers;

}
-(void)dealloc;
-(id)description;
-(id)parent;
-(void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)removeProgressPublisher:(id)arg1 ;
-(void)addProgressPublisher:(id)arg1 ;
-(void)removeProgressSubscriber:(id)arg1 ;
-(void)addProgressSubscriber:(id)arg1 ;
-(id)descendantForFileURL:(id)arg1 ;
-(id)itemProvider;
-(void)removeSelfIfUseless;
-(void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)url;
-(id)standardizedURL;
-(id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3 ;
-(void)setSymbolicLinkDestination:(id)arg1 ;
-(id)pathToDescendantForFileURL:(id)arg1 componentRange:(NSRange*)arg2 ;
-(id)descendantAtPath:(id)arg1 componentRange:(NSRange)arg2 create:(BOOL)arg3 ;
-(void)forEachPresenterOfContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)pathFromAncestor:(id)arg1 ;
-(id)descendantAtPath:(id)arg1 componentRange:(NSRange)arg2 forAddingLeafNode:(id)arg3 create:(BOOL)arg4 ;
-(void)forEachProgressPublisherOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)setParent:(id)arg1 name:(id)arg2 ;
-(void)forEachPresenterOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2 ;
-(void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachPresenterOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)setArbitrationBoundary;
-(id)sensitiveDescription;
-(void)forEachReactorToItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)subarbiterDescription;
-(id)sensitiveSubarbiterDescription;
-(void)forEachPresenterOfItemOrContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)itemIsItemAtLocation:(id)arg1 ;
-(BOOL)itemIsInItemAtLocation:(id)arg1 ;
-(void)forEachPresenterOfContainingFilePackagePerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)itemIsFilePackage;
-(void)forEachPresenterOfContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachRelevantAccessClaimPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)itemIsSubarbitrable;
-(void)addAccessClaim:(id)arg1 ;
-(void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(/*^block*/id)arg2 ;
-(void)removeAccessClaim:(id)arg1 ;
-(void)_setLinkDestination:(id)arg1 ;
-(void)removeChildForNormalizedName:(id)arg1 ;
-(id)normalizationOfChildName:(id)arg1 ;
-(void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3 ;
-(id)childForRange:(NSRange)arg1 ofPath:(id)arg2 ;
-(void)forEachDescendantPerformProcedure:(/*^block*/id)arg1 ;
-(id)biggestFilePackageLocation;
-(void)forEachAccessClaimOnItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(BOOL)arg1 performProcedure:(/*^block*/id)arg2 ;
-(id)pathExceptPrivate;
-(void)forEachProgressSubscriberOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)assertLive;
-(BOOL)_mayContainCriticalDebuggingInformationExcludingReactors:(BOOL)arg1 ;
-(id)_childrenExcludingExcessNodes:(BOOL)arg1 excludingReactors:(BOOL)arg2 ;
-(id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(BOOL)arg2 excludingReactors:(BOOL)arg3 ;
-(void)setFirmlinkDestination:(id)arg1 ;
-(void)addPresenter:(id)arg1 ;
-(void)removePresenter:(id)arg1 ;
-(BOOL)setProvider:(id)arg1 ;
-(void)removeProvider:(id)arg1 ;
-(void)assertDead;
-(void)assertDescendantsLive;
@end

