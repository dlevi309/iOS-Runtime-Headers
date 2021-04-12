/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/ACFKeychainItemInfo.h>

@class NSString, ACFPrincipal, NSData;

@interface ACMKeychainTokenInfo : ACFKeychainItemInfo

@property (retain) NSString * indicator; 
@property (retain) ACFPrincipal * principal; 
@property (retain) NSData * tokenData; 
+(id)keychainTokenInfoWithPrincipal:(id)arg1 ;
+(id)classCode;
+(id)keychainTokenInfoWithPrincipal:(id)arg1 indicator:(id)arg2 ;
-(id)init;
-(NSData *)tokenData;
-(void)setIndicator:(NSString *)arg1 ;
-(NSString *)indicator;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(ACFPrincipal *)principal;
-(void)setTokenData:(NSData *)arg1 ;
@end

