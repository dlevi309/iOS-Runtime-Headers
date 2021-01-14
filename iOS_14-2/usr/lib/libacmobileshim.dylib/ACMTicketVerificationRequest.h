/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString, NSNumber;


@protocol ACMTicketVerificationRequest <NSObject>
@property (retain) NSString * userName; 
@property (retain) NSString * realm; 
@property (retain) NSString * token; 
@property (retain) NSString * appIDKey; 
@property (retain) NSNumber * appID; 
@property (retain) NSNumber * serverResponseTimeout; 
@property (retain) id userInfo; 
@required
-(NSString *)realm;
-(void)setUserInfo:(id)arg1;
-(id)userInfo;
-(NSNumber *)appID;
-(NSString *)userName;
-(void)setUserName:(id)arg1;
-(void)setToken:(id)arg1;
-(void)setRealm:(id)arg1;
-(NSString *)token;
-(void)setAppID:(id)arg1;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end

