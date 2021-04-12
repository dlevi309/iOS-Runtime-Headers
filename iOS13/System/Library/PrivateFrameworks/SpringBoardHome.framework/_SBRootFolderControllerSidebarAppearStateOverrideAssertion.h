/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderController;

@interface _SBRootFolderControllerSidebarAppearStateOverrideAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	NSString* _reason;
	SBRootFolderController* _rootFolderController;

}

@property (nonatomic,__weak,readonly) SBRootFolderController * rootFolderController;              //@synthesize rootFolderController=_rootFolderController - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                               //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                            //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(BOOL)isInvalidated;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)initWithRootFolderController:(id)arg1 reason:(id)arg2 ;
-(SBRootFolderController *)rootFolderController;
@end

