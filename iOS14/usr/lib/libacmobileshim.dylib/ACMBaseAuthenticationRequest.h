/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString, NSNumber;


@protocol ACMBaseAuthenticationRequest <NSObject>
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSString * userName; 
@property (nonatomic,retain) NSNumber * appID; 
@property (nonatomic,retain) NSString * appIDKey; 
@property (nonatomic,retain) NSNumber * serverResponseTimeout; 
@required
-(NSString *)realm;
-(NSNumber *)appID;
-(NSString *)userName;
-(void)setUserName:(id)arg1;
-(void)setRealm:(id)arg1;
-(void)setAppID:(id)arg1;
-(void)setAppIDKey:(id)arg1;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end

