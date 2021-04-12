/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSDisplayConfiguration, BSSettings, NSSet, NSArray, FBSDisplayIdentity, NSString;

@interface FBSSceneSettings : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	CGRect _frame;
	double _level;
	long long _interfaceOrientation;
	BOOL _foreground;
	BSSettings* _otherSettings;
	BSSettings* _transientLocalSettings;
	BOOL _prefersProcessTaskSuspensionWhileSceneForeground;
	long long _isOccluded;
	BOOL _occluded;
	BOOL _occludedHasBeenCalculated;
	NSSet* _ignoreOcclusionReasons;
	NSArray* _occlusions;

}

@property (nonatomic,copy,readonly) FBSDisplayIdentity * displayIdentity; 
@property (nonatomic,copy,readonly) FBSDisplayConfiguration * displayConfiguration;              //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) double level;                                                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;                                   //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (getter=isForeground,nonatomic,readonly) BOOL foreground;                              //@synthesize foreground=_foreground - In the implementation block
@property (getter=isBackgrounded,nonatomic,readonly) BOOL backgrounded; 
@property (nonatomic,copy,readonly) NSArray * occlusions;                                        //@synthesize occlusions=_occlusions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)settings;
+(BOOL)_isMutable;
-(BOOL)isUISubclass;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)level;
-(id)initWithSettings:(id)arg1 ;
-(CGRect)bounds;
-(CGRect)frame;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(long long)interfaceOrientation;
-(FBSDisplayIdentity *)displayIdentity;
-(BOOL)isForeground;
-(FBSDisplayConfiguration *)displayConfiguration;
-(BOOL)isOccluded;
-(id)otherSettings;
-(NSArray *)occlusions;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)isBackgrounded;
-(BOOL)isIgnoringOcclusions;
-(BOOL)prefersProcessTaskSuspensionWhileSceneForeground;
-(void)setPrefersProcessTaskSuspensionWhileSceneForeground:(BOOL)arg1 ;
@end

