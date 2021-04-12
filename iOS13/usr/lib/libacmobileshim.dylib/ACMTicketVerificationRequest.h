/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(NSString *)userName;
-(id)userInfo;
-(void)setUserInfo:(id)arg1;
-(NSString *)realm;
-(void)setRealm:(id)arg1;
-(void)setToken:(id)arg1;
-(void)setUserName:(id)arg1;
-(NSNumber *)appID;
-(void)setAppID:(id)arg1;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end

