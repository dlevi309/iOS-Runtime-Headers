/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/


@class TKTokenConfigurationConnection, NSString, NSDictionary;

@interface TKTokenDriverConfiguration : NSObject {

	TKTokenConfigurationConnection* _configurationConnection;
	NSString* _classID;

}

@property (nonatomic,readonly) NSString * classID;                                   //@synthesize classID=_classID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tokenConfigurations; 
+(id)driverConfigurationsWithClient:(id)arg1 ;
+(id)driverConfigurations;
-(id)beginTransaction;
-(NSString *)classID;
-(id)initWithClassID:(id)arg1 configurationConnection:(id)arg2 ;
-(id)createTokenConfigurationWithInstanceID:(id)arg1 persistent:(BOOL)arg2 ;
-(NSDictionary *)tokenConfigurations;
-(id)addTokenConfigurationForTokenInstanceID:(id)arg1 ;
-(void)removeTokenConfigurationForTokenInstanceID:(id)arg1 ;
@end

