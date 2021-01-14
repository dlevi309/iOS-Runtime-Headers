/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
*/


@class NSData, NSString, NSDictionary;

@interface UMUserSwitchContext : NSObject {

	BOOL _secondaryActionRequired;
	NSData* _setupData;
	NSString* _shortLivedToken;
	NSDictionary* _environmentsByServices;

}

@property (nonatomic,copy) NSData * setupData;                                 //@synthesize setupData=_setupData - In the implementation block
@property (nonatomic,copy) NSString * shortLivedToken;                         //@synthesize shortLivedToken=_shortLivedToken - In the implementation block
@property (assign,nonatomic) BOOL secondaryActionRequired;                     //@synthesize secondaryActionRequired=_secondaryActionRequired - In the implementation block
@property (nonatomic,copy) NSDictionary * environmentsByServices;              //@synthesize environmentsByServices=_environmentsByServices - In the implementation block
+(void)_switchEnvironmentsByServices:(id)arg1 ;
+(id)contextWithSetupData:(id)arg1 shortLivedToken:(id)arg2 secondaryActionRequired:(BOOL)arg3 ;
+(id)contextWithDataRepresentation:(id)arg1 ;
+(BOOL)_isInternalBuild;
-(id)dataRepresentation;
-(void)setSetupData:(NSData *)arg1 ;
-(BOOL)secondaryActionRequired;
-(NSString *)shortLivedToken;
-(void)setShortLivedToken:(NSString *)arg1 ;
-(void)setSecondaryActionRequired:(BOOL)arg1 ;
-(void)setEnvironmentsByServices:(NSDictionary *)arg1 ;
-(NSDictionary *)environmentsByServices;
-(id)dictRepresentation;
-(id)description;
-(NSData *)setupData;
@end

