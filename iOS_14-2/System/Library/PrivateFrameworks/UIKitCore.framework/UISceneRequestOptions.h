/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _sceneRequestIntent;

}

@property (nonatomic,copy) NSString * sourceIdentifier;                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,copy) NSSet * actions;                             //@synthesize actions=_actions - In the implementation block
@property (assign,nonatomic) BOOL requestFullscreen;                    //@synthesize requestFullscreen=_requestFullscreen - In the implementation block
@property (assign,nonatomic) BOOL requestBackground;                    //@synthesize requestBackground=_requestBackground - In the implementation block
@property (assign,nonatomic) BOOL preserveLayout;                       //@synthesize preserveLayout=_preserveLayout - In the implementation block
@property (assign,nonatomic) long long sceneRequestIntent;              //@synthesize sceneRequestIntent=_sceneRequestIntent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(void)setActions:(NSSet *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSSet *)actions;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(BOOL)preserveLayout;
-(void)setPreserveLayout:(BOOL)arg1 ;
-(void)setRequestFullscreen:(BOOL)arg1 ;
-(void)setRequestBackground:(BOOL)arg1 ;
-(BOOL)requestBackground;
-(BOOL)requestFullscreen;
-(long long)sceneRequestIntent;
-(void)setSceneRequestIntent:(long long)arg1 ;
-(NSString *)sourceIdentifier;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

