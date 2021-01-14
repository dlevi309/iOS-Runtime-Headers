/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

@class NSString, NSDictionary, NSError;


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
@optional
-(void)setGeneratedWithTouchID:(BOOL)arg1;
-(BOOL)generatedWithTouchID;

@required
-(NSString *)userName;
-(void)setError:(id)arg1;
-(NSError *)error;
-(void)setUserName:(id)arg1;
-(void)setToken:(id)arg1;
-(NSDictionary *)rawResponseData;
-(NSString *)token;
-(void)setRawResponseData:(id)arg1;

@end

