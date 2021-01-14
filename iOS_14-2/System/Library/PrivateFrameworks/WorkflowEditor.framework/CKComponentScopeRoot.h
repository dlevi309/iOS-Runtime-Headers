/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol CKComponentStateListener;
#import <WorkflowEditor/WorkflowEditor-Structs.h>
@class NSHashTable, CKComponentScopeFrame;

@interface CKComponentScopeRoot : NSObject {

	unordered_multimap<CKComponentAnnouncedEvent, CKComponentController *, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const CKComponentAnnouncedEvent, CKComponentController *> > >* _eventRegistration;
	NSHashTable* _boundsAnimationComponents;
	int _globalIdentifier;
	id<CKComponentStateListener> _listener;
	CKComponentScopeFrame* _rootFrame;

}

@property (nonatomic,__weak,readonly) id<CKComponentStateListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) int globalIdentifier;                                      //@synthesize globalIdentifier=_globalIdentifier - In the implementation block
@property (nonatomic,readonly) CKComponentScopeFrame * rootFrame;                         //@synthesize rootFrame=_rootFrame - In the implementation block
+(id)rootWithListener:(id)arg1 ;
-(id<CKComponentStateListener>)listener;
-(int)globalIdentifier;
-(void)registerAnnounceableEventsForController:(id)arg1 ;
-(void)registerBoundsAnimationComponent:(id)arg1 ;
-(id)newRoot;
-(id)initWithListener:(id)arg1 globalIdentifier:(int)arg2 ;
-(void)announceEventToControllers:(unsigned long long)arg1 ;
-(id)boundsAnimationComponents;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousScopeRoot:(id)arg1 ;
-(CKComponentScopeFrame *)rootFrame;
@end

