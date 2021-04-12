/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneSpecification, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {

	BOOL _keyboardScene;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneClientSettings* _initialClientSettings;

}

@property (assign,getter=isKeyboardScene,nonatomic) BOOL keyboardScene;                 //@synthesize keyboardScene=_keyboardScene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                       //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * initialClientSettings;              //@synthesize initialClientSettings=_initialClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(FBSSceneSpecification *)specification;
-(BOOL)isKeyboardScene;
-(FBSSceneClientSettings *)initialClientSettings;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(void)setKeyboardScene:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setInitialClientSettings:(FBSSceneClientSettings *)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

