/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(NSString *)userName;
-(NSError *)error;
-(void)setError:(id)arg1;
-(void)setToken:(id)arg1;
-(void)setUserName:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;

@end

