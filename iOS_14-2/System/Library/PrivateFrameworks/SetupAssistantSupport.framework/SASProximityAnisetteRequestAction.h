/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SASProximityAction.h>
#import <libobjc.A.dylib/AKAnisetteServiceProtocol.h>

@class NSData, NSString, AKAnisetteData;

@interface SASProximityAnisetteRequestAction : SASProximityAction <AKAnisetteServiceProtocol> {

	BOOL _shouldProvision;
	BOOL _success;
	long long _request;
	NSData* _sim;
	NSString* _dsid;
	AKAnisetteData* _anisetteData;

}

@property (assign) long long request;                               //@synthesize request=_request - In the implementation block
@property (retain) NSData * sim;                                    //@synthesize sim=_sim - In the implementation block
@property (assign) BOOL shouldProvision;                            //@synthesize shouldProvision=_shouldProvision - In the implementation block
@property (retain) NSString * dsid;                                 //@synthesize dsid=_dsid - In the implementation block
@property (retain) AKAnisetteData * anisetteData;                   //@synthesize anisetteData=_anisetteData - In the implementation block
@property (assign) BOOL success;                                    //@synthesize success=_success - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)actionID;
+(id)actionFromDictionary:(id)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSData *)sim;
-(BOOL)hasResponse;
-(void)setRequest:(long long)arg1 ;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)request;
-(void)setSim:(NSData *)arg1 ;
-(BOOL)shouldProvision;
-(void)setShouldProvision:(BOOL)arg1 ;
-(AKAnisetteData *)anisetteData;
-(void)setAnisetteData:(AKAnisetteData *)arg1 ;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(id)requestPayload;
-(void)setResponseFromData:(id)arg1 ;
-(id)responsePayload;
@end

