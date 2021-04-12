/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@required
-(id)userInfo;
-(NSError *)error;
-(void)setError:(id)arg1;
-(void)setUserInfo:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(NSNumber *)personDSID;

@end

