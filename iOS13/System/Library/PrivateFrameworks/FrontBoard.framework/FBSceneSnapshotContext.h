/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSSet, FBSSceneSettings, NSDate, BSSettings;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding> {

	NSString* _sceneID;
	CGRect _frame;
	BOOL _opaque;
	NSSet* _layersToExclude;
	FBSSceneSettings* _settings;
	long long _orientation;
	NSDate* _expirationDate;
	double _scale;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy,readonly) NSString * sceneID;                  //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) FBSSceneSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) CGRect frame;                               //@synthesize frame=_frame - In the implementation block
@property (assign,getter=isOpaque,nonatomic) BOOL opaque;                //@synthesize opaque=_opaque - In the implementation block
@property (assign,nonatomic) double scale;                               //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSSet * layersToExclude;                      //@synthesize layersToExclude=_layersToExclude - In the implementation block
@property (assign,nonatomic) long long orientation;                      //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithFBSContext:(id)arg1 ;
-(NSString *)description;
-(double)scale;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(BOOL)isOpaque;
-(CGRect)frame;
-(void)setScale:(double)arg1 ;
-(FBSSceneSettings *)settings;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)setLayersToExclude:(NSSet *)arg1 ;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(NSString *)sceneID;
-(NSSet *)layersToExclude;
-(id)initWithFBSContext:(id)arg1 ;
@end

