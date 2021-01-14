/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

@class NSString;


@protocol _TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_ <JSExport>
@property (readonly,nonatomic) NSString * platform; 
@property (readonly,nonatomic) NSString * osBuild; 
@property (readonly,nonatomic) NSString * deviceModel; 
@property (readonly,nonatomic) NSString * deviceLocalizedModel; 
@property (readonly,nonatomic) NSString * clientIdentifier; 
@property (readonly,nonatomic) NSString * clientVersion; 
@required
-(NSString *)platform;
-(NSString *)deviceModel;
-(NSString *)deviceLocalizedModel;
-(NSString *)osBuild;
-(NSString *)clientVersion;
-(NSString *)clientIdentifier;
-(BOOL)isOSAtLeast:(id)arg1 :(id)arg2 :(id)arg3;

@end

