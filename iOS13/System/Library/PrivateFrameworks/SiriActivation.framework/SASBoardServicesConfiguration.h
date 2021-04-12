/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(NSString *)machServiceIdentifier;
-(id)identifierForService:(long long)arg1 ;
-(void)setPresentationIdentifier:(NSString *)arg1 ;
-(NSString *)presentationIdentifier;
-(void)setMachServiceIdentifier:(NSString *)arg1 ;
-(void)setPresentationDomain:(NSString *)arg1 ;
-(void)setSignalDomain:(NSString *)arg1 ;
-(void)setSignalIdentifier:(NSString *)arg1 ;
-(NSString *)presentationDomain;
-(NSString *)signalDomain;
-(NSString *)signalIdentifier;
-(id)domainForService:(long long)arg1 ;
@end

