/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSNumber, NSDictionary, NSError;


@protocol ACMTicketVerificationResponse <NSObject>
@property (retain,readonly) NSNumber * personDSID; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (retain) id userInfo; 
@required
-(void)setUserInfo:(id)arg1;
-(id)userInfo;
-(void)setError:(id)arg1;
-(NSError *)error;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(NSNumber *)personDSID;

@end

