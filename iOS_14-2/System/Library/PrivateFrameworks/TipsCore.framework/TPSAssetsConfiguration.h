/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class TPSAssets, NSString;

@interface TPSAssetsConfiguration : NSObject {

	long long _opacity;
	long long _userInterface;
	long long _viewMode;
	long long _capability;
	TPSAssets* _assets;
	NSString* _language;

}

@property (assign,nonatomic) long long opacity;                    //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) long long userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
@property (assign,nonatomic) long long viewMode;                   //@synthesize viewMode=_viewMode - In the implementation block
@property (assign,nonatomic) long long capability;                 //@synthesize capability=_capability - In the implementation block
@property (nonatomic,copy) TPSAssets * assets;                     //@synthesize assets=_assets - In the implementation block
@property (nonatomic,copy) NSString * language;                    //@synthesize language=_language - In the implementation block
-(TPSAssets *)assets;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)opacity;
-(long long)userInterface;
-(id)identifierForType:(long long)arg1 ;
-(id)cacheIdentifierForType:(long long)arg1 ;
-(id)debugDescription;
-(void)setOpacity:(long long)arg1 ;
-(id)initWithAssets:(id)arg1 language:(id)arg2 ;
-(void)setViewMode:(long long)arg1 ;
-(void)setUserInterface:(long long)arg1 ;
-(long long)viewMode;
-(void)setAssets:(TPSAssets *)arg1 ;
-(long long)capability;
-(void)setCapability:(long long)arg1 ;
-(NSString *)language;
@end

