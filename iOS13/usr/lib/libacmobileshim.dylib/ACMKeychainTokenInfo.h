/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)indicator;
-(void)setIndicator:(NSString *)arg1 ;
-(NSData *)tokenData;
-(void)setTokenData:(NSData *)arg1 ;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(ACFPrincipal *)principal;
@end

