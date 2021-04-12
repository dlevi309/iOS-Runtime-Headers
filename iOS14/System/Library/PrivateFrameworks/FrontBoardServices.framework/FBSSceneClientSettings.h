/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSOrderedSet, NSString, FBSSceneIdentityToken, BSSettings, NSSet;

@interface FBSSceneClientSettings : NSObject <BSDebugDescriptionProviding, BSXPCSecureCoding, NSCopying, NSMutableCopying> {

	NSOrderedSet* _layers;
	double _preferredLevel;
	long long _preferredInterfaceOrientation;
	NSString* _preferredSceneHostIdentifier;
	FBSSceneIdentityToken* _preferredSceneHostIdentity;
	BSSettings* _otherSettings;

}

@property (nonatomic,copy,readonly) NSOrderedSet * layers;                                           //@synthesize layers=_layers - In the implementation block
@property (nonatomic,readonly) double preferredLevel;                                                //@synthesize preferredLevel=_preferredLevel - In the implementation block
@property (nonatomic,readonly) long long preferredInterfaceOrientation;                              //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,copy,readonly) NSSet * occlusions; 
@property (nonatomic,copy,readonly) NSString * preferredSceneHostIdentifier;                         //@synthesize preferredSceneHostIdentifier=_preferredSceneHostIdentifier - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneIdentityToken * preferredSceneHostIdentity;              //@synthesize preferredSceneHostIdentity=_preferredSceneHostIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settings;
+(BOOL)_isMutable;
+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isUISubclass;
-(id)succinctDescription;
-(id)initWithSettings:(id)arg1 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)init;
-(NSOrderedSet *)layers;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(NSSet *)occlusions;
-(NSString *)description;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(BOOL)arg2 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)preferredInterfaceOrientation;
-(double)preferredLevel;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)otherSettings;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBSSceneIdentityToken *)preferredSceneHostIdentity;
-(NSString *)preferredSceneHostIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

