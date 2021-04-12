/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)setProvider:(id)arg1 ;
-(id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2 ;
-(void)setFirmlinkDestination:(id)arg1 ;
-(id)parent;
-(void)forEachPresenterOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachPresenterOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)removeChildForNormalizedName:(id)arg1 ;
-(id)biggestFilePackageLocation;
-(void)removePresenter:(id)arg1 ;
-(void)addProgressPublisher:(id)arg1 ;
-(void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(BOOL)arg1 performProcedure:(/*^block*/id)arg2 ;
-(id)descendantForFileURL:(id)arg1 ;
-(void)forEachPresenterOfContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachPresenterOfItemOrContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)removeProgressSubscriber:(id)arg1 ;
-(void)removeProvider:(id)arg1 ;
-(void)removeAccessClaim:(id)arg1 ;
-(void)forEachProgressPublisherOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(/*^block*/id)arg2 ;
-(id)pathExceptPrivate;
-(void)addProgressSubscriber:(id)arg1 ;
-(void)assertLive;
-(void)forEachPresenterOfContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachRelevantAccessClaimPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)itemIsFilePackage;
-(id)descendantAtPath:(id)arg1 componentRange:(NSRange)arg2 create:(BOOL)arg3 ;
-(void)setSymbolicLinkDestination:(id)arg1 ;
-(id)itemProvider;
-(id)childForRange:(NSRange)arg1 ofPath:(id)arg2 ;
-(void)assertDead;
-(id)subarbiterDescription;
-(BOOL)_mayContainCriticalDebuggingInformationExcludingReactors:(BOOL)arg1 ;
-(id)url;
-(void)removeProgressPublisher:(id)arg1 ;
-(id)_childrenExcludingExcessNodes:(BOOL)arg1 excludingReactors:(BOOL)arg2 ;
-(id)sensitiveSubarbiterDescription;
-(id)description;
-(void)setParent:(id)arg1 name:(id)arg2 ;
-(void)addAccessClaim:(id)arg1 ;
-(id)descendantAtPath:(id)arg1 componentRange:(NSRange)arg2 forAddingLeafNode:(id)arg3 create:(BOOL)arg4 ;
-(void)forEachDescendantPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)setArbitrationBoundary;
-(id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(BOOL)arg2 excludingReactors:(BOOL)arg3 ;
-(id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3 ;
-(void)forEachReactorToItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)assertDescendantsLive;
-(void)forEachProgressSubscriberOfItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)normalizationOfChildName:(id)arg1 ;
-(id)pathFromAncestor:(id)arg1 ;
-(void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)forEachPresenterOfContainingFilePackagePerformProcedure:(/*^block*/id)arg1 ;
-(void)_setLinkDestination:(id)arg1 ;
-(BOOL)itemIsInItemAtLocation:(id)arg1 ;
-(void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(BOOL)itemIsItemAtLocation:(id)arg1 ;
-(id)pathToDescendantForFileURL:(id)arg1 componentRange:(NSRange*)arg2 ;
-(void)forEachAccessClaimOnItemPerformProcedure:(/*^block*/id)arg1 ;
-(void)removeSelfIfUseless;
-(void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(/*^block*/id)arg1 ;
-(id)standardizedURL;
-(id)sensitiveDescription;
-(void)addPresenter:(id)arg1 ;
-(void)dealloc;
-(void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3 ;
-(BOOL)itemIsSubarbitrable;
@end

