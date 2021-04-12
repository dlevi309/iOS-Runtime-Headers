/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSSceneSettings, FBSSceneClientSettings, FBSSceneSpecification, NSString;

@interface FBSSceneParameters : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, BSDescriptionProviding> {

	FBSSceneSettings* _settings;
	FBSSceneClientSettings* _clientSettings;
	FBSSceneSpecification* _specification;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * clientSettings;                     //@synthesize clientSettings=_clientSettings - In the implementation block
@property (nonatomic,copy,readonly) FBSSceneSpecification * specification;              //@synthesize specification=_specification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parametersForSpecification:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(FBSSceneSettings *)settings;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(FBSSceneClientSettings *)clientSettings;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(id)initWithSpecification:(id)arg1 ;
-(void)_configureCopy:(id)arg1 ;
@end

