/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBSSceneClientSettings *)clientSettings;
-(id)succinctDescription;
-(id)initWithSpecification:(id)arg1 ;
-(void)setClientSettings:(FBSSceneClientSettings *)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(void)updateSettingsWithBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

