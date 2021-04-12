/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSDisplayConfiguration, BSSettings, NSSet, FBSDisplayIdentity, NSArray, NSString;

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	CGRect _frame;
	double _level;
	long long _interfaceOrientation;
	BOOL _foreground;
	long long _interruptionPolicy;
	BSSettings* _otherSettings;
	BSSettings* _transientLocalSettings;
	BOOL _prefersProcessTaskSuspensionWhileSceneForeground;
	long long _isOccluded;
	BOOL _occluded;
	NSSet* _ignoreOcclusionReasons;

}

@property (nonatomic,copy,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) double level;                                                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground;                              //@synthesize foreground=_foreground - In the implementation block
@property (getter=isBackgrounded,nonatomic,readonly) BOOL backgrounded; 
@property (nonatomic,readonly) long long interruptionPolicy;                                     //@synthesize interruptionPolicy=_interruptionPolicy - In the implementation block
@property (nonatomic,copy,readonly) NSArray * occlusions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settings;
+(BOOL)_isMutable;
-(BOOL)isUISubclass;
-(CGRect)bounds;
-(id)succinctDescription;
-(id)initWithSettings:(id)arg1 ;
-(id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)init;
-(BOOL)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(CGRect)frame;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)settings:(id)arg1 keyDescriptionForSetting:(unsigned long long)arg2 ;
-(NSString *)debugDescription;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)appendDescriptionToBuilder:(id)arg1 forFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)interruptionPolicy;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isForeground;
-(BOOL)isOccluded;
-(NSArray *)occlusions;
-(NSString *)description;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)isBackgrounded;
-(BOOL)isIgnoringOcclusions;
-(BOOL)prefersProcessTaskSuspensionWhileSceneForeground;
-(void)setPrefersProcessTaskSuspensionWhileSceneForeground:(BOOL)arg1 ;
-(double)level;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)interfaceOrientation;
-(unsigned long long)hash;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)otherSettings;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

