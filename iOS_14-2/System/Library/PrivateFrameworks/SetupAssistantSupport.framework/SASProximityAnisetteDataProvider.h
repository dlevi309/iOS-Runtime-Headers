/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
*/

#import <SetupAssistantSupport/SetupAssistantSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/AKAnisetteServiceProtocol.h>

@class SASProximitySession, NSString;

@interface SASProximityAnisetteDataProvider : NSObject <NSCopying, AKAnisetteServiceProtocol> {

	SASProximitySession* _session;

}

@property (retain) SASProximitySession * session;                   //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SASProximitySession *)session;
-(void)setSession:(SASProximitySession *)arg1 ;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

