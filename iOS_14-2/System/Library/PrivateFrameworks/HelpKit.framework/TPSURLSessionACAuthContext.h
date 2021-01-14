/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TPSURLSessionACAuthContext : NSObject <NSCopying> {

	NSString* _appIdentifier;
	NSString* _clientIdentifier;
	NSString* _enviromentIdentifier;
	NSString* _interactivityMode;

}

@property (nonatomic,copy) NSString * appIdentifier;                     //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                  //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * enviromentIdentifier;              //@synthesize enviromentIdentifier=_enviromentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactivityMode;                 //@synthesize interactivityMode=_interactivityMode - In the implementation block
+(id)defaultContext;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(id)initWithAppIdentifier:(id)arg1 enviromentIdentifier:(id)arg2 interactivity:(id)arg3 ;
-(NSString *)enviromentIdentifier;
-(void)setEnviromentIdentifier:(NSString *)arg1 ;
-(NSString *)interactivityMode;
-(void)setInteractivityMode:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

