/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBSSceneIdentityToken;

@interface FBSceneLayer : NSObject <BSDescriptionProviding, NSCopying> {

	long long _type;
	double _level;
	long long _alignment;
	unsigned _contextID;
	NSString* _externalSceneID;
	FBSSceneIdentityToken* _proxiedKeyboardOwner;
	unsigned _sceneID;

}

@property (assign,nonatomic) unsigned sceneID;                                                 //@synthesize sceneID=_sceneID - In the implementation block
@property (assign,nonatomic) double level;                                                     //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) long long alignment;                                              //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,copy) NSString * externalSceneID;                                         //@synthesize externalSceneID=_externalSceneID - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardLayer; 
@property (nonatomic,readonly) BOOL isKeyboardProxyLayer; 
@property (nonatomic,readonly) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                                             //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneIdentityToken * proxiedKeyboardOwner;              //@synthesize proxiedKeyboardOwner=_proxiedKeyboardOwner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layerWithFBSSceneLayer:(id)arg1 ;
-(id)succinctDescription;
-(void)setSceneID:(unsigned)arg1 ;
-(id)init;
-(long long)alignment;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)externalSceneID;
-(id)initAsKeyboard;
-(id)initAsKeyboardProxyWithOwner:(id)arg1 ;
-(id)initWithContextID:(unsigned)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(BOOL)isKeyboardProxyLayer;
-(NSString *)description;
-(double)level;
-(unsigned)contextID;
-(id)initWithExternalSceneID:(id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(FBSSceneIdentityToken *)proxiedKeyboardOwner;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isKeyboardLayer;
-(id)succinctDescriptionBuilder;
-(void)setLevel:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExternalSceneID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)sceneID;
@end

