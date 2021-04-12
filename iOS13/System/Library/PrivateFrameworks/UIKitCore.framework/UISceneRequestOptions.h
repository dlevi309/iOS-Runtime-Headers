/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <FrontBoardServices/FBSWorkspaceSceneRequestOptions.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, NSSet;

@interface UISceneRequestOptions : FBSWorkspaceSceneRequestOptions <BSXPCSecureCoding> {

	BOOL _requestFullscreen;
	BOOL _requestBackground;
	BOOL _preserveLayout;
	NSString* _sourceIdentifier;
	NSSet* _actions;

}

@property (nonatomic,copy) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * actions;                          //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL requestFullscreen;                 //@synthesize requestFullscreen=_requestFullscreen - In the implementation block
@property (assign,nonatomic) BOOL requestBackground;                 //@synthesize requestBackground=_requestBackground - In the implementation block
@property (assign,nonatomic) BOOL preserveLayout;                    //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(NSSet *)actions;
-(void)setActions:(NSSet *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(void)setRequestFullscreen:(BOOL)arg1 ;
-(void)setRequestBackground:(BOOL)arg1 ;
-(NSString *)sourceIdentifier;
-(BOOL)requestFullscreen;
-(BOOL)requestBackground;
@end

