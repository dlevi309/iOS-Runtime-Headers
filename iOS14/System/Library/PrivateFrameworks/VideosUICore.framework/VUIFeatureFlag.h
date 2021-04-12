/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/


@class NSString;

@interface VUIFeatureFlag : NSObject {

	BOOL _enabled;
	BOOL _isAvailableForOS;
	BOOL _isEnabledByDefault;
	NSString* _featureName;
	NSString* _featureDescription;
	NSString* _defaultsKey;
	NSString* _defaultsDomain;
	NSString* _isEnabledByDefaultKey;

}

@property (nonatomic,readonly) NSString * defaultsDomain;                   //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,retain) NSString * isEnabledByDefaultKey;              //@synthesize isEnabledByDefaultKey=_isEnabledByDefaultKey - In the implementation block
@property (nonatomic,readonly) NSString * featureName;                      //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,readonly) NSString * featureDescription;               //@synthesize featureDescription=_featureDescription - In the implementation block
@property (nonatomic,readonly) NSString * defaultsKey;                      //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,readonly) BOOL isAvailableForOS;                       //@synthesize isAvailableForOS=_isAvailableForOS - In the implementation block
@property (nonatomic,readonly) BOOL isEnabledByDefault;                     //@synthesize isEnabledByDefault=_isEnabledByDefault - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(NSString *)featureDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)defaultsDomain;
-(NSString *)defaultsKey;
-(NSString *)featureName;
-(BOOL)isEnabledByDefault;
-(id)initWithFeatureDict:(id)arg1 ;
-(BOOL)isAvailableForOS;
-(NSString *)isEnabledByDefaultKey;
-(BOOL)_enabledFromDefaults;
-(void)setIsEnabledByDefaultKey:(NSString *)arg1 ;
@end

