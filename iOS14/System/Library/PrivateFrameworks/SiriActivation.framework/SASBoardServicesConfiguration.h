/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/


@class NSString;

@interface SASBoardServicesConfiguration : NSObject {

	NSString* _machServiceIdentifier;
	NSString* _presentationDomain;
	NSString* _presentationIdentifier;
	NSString* _signalDomain;
	NSString* _signalIdentifier;

}

@property (nonatomic,retain) NSString * machServiceIdentifier;               //@synthesize machServiceIdentifier=_machServiceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * presentationDomain;                  //@synthesize presentationDomain=_presentationDomain - In the implementation block
@property (nonatomic,retain) NSString * presentationIdentifier;              //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * signalDomain;                        //@synthesize signalDomain=_signalDomain - In the implementation block
@property (nonatomic,retain) NSString * signalIdentifier;                    //@synthesize signalIdentifier=_signalIdentifier - In the implementation block
+(id)new;
+(id)configuration;
-(id)init;
-(void)setPresentationIdentifier:(NSString *)arg1 ;
-(id)_init;
-(NSString *)presentationIdentifier;
-(void)setMachServiceIdentifier:(NSString *)arg1 ;
-(void)setPresentationDomain:(NSString *)arg1 ;
-(void)setSignalDomain:(NSString *)arg1 ;
-(void)setSignalIdentifier:(NSString *)arg1 ;
-(NSString *)presentationDomain;
-(NSString *)signalDomain;
-(NSString *)signalIdentifier;
-(id)domainForService:(long long)arg1 ;
-(id)identifierForService:(long long)arg1 ;
-(NSString *)machServiceIdentifier;
@end

