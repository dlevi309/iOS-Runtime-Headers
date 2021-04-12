/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACMPreferences.h>
#import <libobjc.A.dylib/ACMPrincipalPreferences.h>
@class ACFPrincipal, NSString, NSNumber;


@protocol ACMPrincipalPreferences <ACMBasePreferences>
@property (retain,readonly) ACFPrincipal * principal; 
@property (nonatomic,copy) NSString * clientSecret; 
@property (nonatomic,copy) NSNumber * clientSecretCreateDate; 
@property (nonatomic,copy) NSNumber * personID; 
@required
+(id)preferencesForPrincipal:(id)arg1;
-(id)realm;
-(id)userName;
-(id)initWithPrincipal:(id)arg1;
-(NSNumber *)personID;
-(ACFPrincipal *)principal;
-(void)setPersonID:(id)arg1;
-(NSString *)clientSecret;
-(void)setClientSecret:(id)arg1;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(id)arg1;

@end


@class ACFPrincipal, NSString, NSNumber;

@interface ACMPrincipalPreferences : ACMPreferences <ACMPrincipalPreferences> {

	ACFPrincipal* _principal;

}

@property (retain) ACFPrincipal * principal;                               //@synthesize principal=_principal - In the implementation block
@property (nonatomic,copy) NSString * clientSecret; 
@property (nonatomic,copy) NSNumber * clientSecretCreateDate; 
@property (nonatomic,copy) NSNumber * personID; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)preferencesForPrincipal:(id)arg1 ;
-(id)realm;
-(id)userName;
-(id)initWithPrincipal:(id)arg1 ;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(NSNumber *)personID;
-(ACFPrincipal *)principal;
-(void)setPersonID:(NSNumber *)arg1 ;
-(void)dealloc;
-(NSString *)clientSecret;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(NSNumber *)arg1 ;
@end

