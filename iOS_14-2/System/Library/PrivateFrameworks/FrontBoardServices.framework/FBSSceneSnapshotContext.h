/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettings, NSSet, BSSettings;

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSString* _sceneID;
	NSString* _name;
	FBSSceneSettings* _settings;
	CGRect _frame;
	double _scale;
	double _expirationInterval;
	NSSet* _layersToExclude;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                  //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                               //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSSet * layersToExclude;                      //@synthesize layersToExclude=_layersToExclude - In the implementation block
@property (assign,nonatomic) double expirationInterval;                  //@synthesize expirationInterval=_expirationInterval - In the implementation block
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithSceneID:(id)arg1 settings:(id)arg2 ;
-(id)succinctDescription;
-(void)setLayersToExclude:(NSSet *)arg1 ;
-(NSSet *)layersToExclude;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)expirationInterval;
-(double)scale;
-(CGRect)frame;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(BSSettings *)clientExtendedData;
-(NSString *)name;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(NSString *)description;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(FBSSceneSettings *)settings;
-(void)setScale:(double)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithSceneID:(id)arg1 settings:(id)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)setExpirationInterval:(double)arg1 ;
-(NSString *)sceneID;
@end

