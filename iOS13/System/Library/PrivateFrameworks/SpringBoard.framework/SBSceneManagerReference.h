/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>

@protocol SBSceneManagerReferenceDelegate;
@class FBSDisplayIdentity, SBSceneManager, NSMutableSet, NSString;

@interface SBSceneManagerReference : NSObject <BSDebugDescriptionProviding> {

	FBSDisplayIdentity* _displayIdentity;
	id<SBSceneManagerReferenceDelegate> _delegate;
	SBSceneManager* _manager;
	SBSceneManager* _weak_manager;
	BOOL _managerWasValid;
	BOOL _displayIsConnected;
	NSMutableSet* _retainingScenes;
	BOOL _invalidated;

}

@property (nonatomic,retain) FBSDisplayIdentity * displayIdentity;              //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)manager;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(void)setManager:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)isDefunct;
-(void)releaseForScene:(id)arg1 ;
-(void)retainForScene:(id)arg1 ;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(BOOL)isRetaining;
-(void)_autoreleaseManager:(id)arg1 ;
-(void)_updateRetainWithBlock:(/*^block*/id)arg1 ;
-(void)setDisplayIsConnected:(BOOL)arg1 ;
-(void)setDisplayIdentity:(FBSDisplayIdentity *)arg1 ;
@end

