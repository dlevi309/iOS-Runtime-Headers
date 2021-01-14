/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)succinctDescription;
-(void)setDisplayIdentity:(FBSDisplayIdentity *)arg1 ;
-(id)delegate;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setManager:(id)arg1 ;
-(NSString *)debugDescription;
-(FBSDisplayIdentity *)displayIdentity;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(NSString *)description;
-(void)_autoreleaseManager:(id)arg1 ;
-(void)_updateRetainWithBlock:(/*^block*/id)arg1 ;
-(void)releaseForScene:(id)arg1 ;
-(id)manager;
-(void)invalidate;
-(void)setDisplayIsConnected:(BOOL)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(BOOL)isRetaining;
-(BOOL)isDefunct;
-(void)retainForScene:(id)arg1 ;
@end

