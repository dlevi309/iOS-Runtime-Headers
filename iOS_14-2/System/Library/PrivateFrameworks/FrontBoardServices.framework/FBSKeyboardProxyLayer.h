/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FBSSceneLayer.h>

@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer {

	FBSSceneIdentityToken* _keyboardOwner;

}

@property (nonatomic,readonly) FBSSceneIdentityToken * keyboardOwner;              //@synthesize keyboardOwner=_keyboardOwner - In the implementation block
-(FBSSceneIdentityToken *)keyboardOwner;
-(long long)alignment;
-(BOOL)isKeyboardProxyLayer;
-(id)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithLevel:(double)arg1 keyboardOwner:(id)arg2 ;
-(id)_succinctDescription;
-(BOOL)isEqual:(id)arg1 ;
@end

