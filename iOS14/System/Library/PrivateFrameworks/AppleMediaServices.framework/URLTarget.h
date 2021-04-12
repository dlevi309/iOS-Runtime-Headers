/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSString;

@interface URLTarget : NSObject {

	unsigned _applicationState;
	NSString* _bundleID;
	long long _defaultIndex;
	NSString* _normalScheme;
	NSString* _secureScheme;

}

@property (assign,nonatomic) unsigned applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) long long defaultIndex;                 //@synthesize defaultIndex=_defaultIndex - In the implementation block
@property (nonatomic,retain) NSString * normalScheme;                //@synthesize normalScheme=_normalScheme - In the implementation block
@property (nonatomic,retain) NSString * secureScheme;                //@synthesize secureScheme=_secureScheme - In the implementation block
+(id)targetWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(unsigned)applicationState;
-(void)setSecureScheme:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(id)initWithBundle:(id)arg1 scheme:(id)arg2 secureScheme:(id)arg3 ;
-(long long)defaultIndex;
-(void)setApplicationState:(unsigned)arg1 ;
-(void)setDefaultIndex:(long long)arg1 ;
-(NSString *)normalScheme;
-(void)setNormalScheme:(NSString *)arg1 ;
-(NSString *)bundleID;
-(NSString *)secureScheme;
@end

