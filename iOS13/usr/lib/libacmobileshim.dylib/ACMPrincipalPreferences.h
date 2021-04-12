/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)userName;
-(id)realm;
-(NSNumber *)personID;
-(void)setPersonID:(id)arg1;
-(NSString *)clientSecret;
-(ACFPrincipal *)principal;
-(id)initWithPrincipal:(id)arg1;
-(void)setClientSecret:(id)arg1;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(id)arg1;

@end


@class ACFPrincipal, NSString, NSNumber;

@interface ACMPrincipalPreferences : ACMPreferences <ACMPrincipalPreferences> {

	ACFPrincipal* _principal;

}

@property (retain) ACFPrincipal * principal;                               //@synthesize principal=_principal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (nonatomic,copy) NSString * clientSecret; 
@property (nonatomic,copy) NSNumber * clientSecretCreateDate; 
@property (nonatomic,copy) NSNumber * personID; 
+(id)preferencesForPrincipal:(id)arg1 ;
-(void)dealloc;
-(id)userName;
-(id)realm;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(NSString *)clientSecret;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(ACFPrincipal *)principal;
-(id)initWithPrincipal:(id)arg1 ;
-(void)setClientSecret:(NSString *)arg1 ;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecretCreateDate:(NSNumber *)arg1 ;
@end

