/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
*/


@class NSString, NSDictionary, NSNumber;

@interface _FTPasswordManagerCachedAuthTokenInfo : NSObject {

	NSString* _profileID;
	NSString* _selfID;
	NSString* _token;
	NSDictionary* _alertInfo;
	NSNumber* _status;

}

@property (nonatomic,retain) NSString * profileID;                  //@synthesize profileID=_profileID - In the implementation block
@property (nonatomic,retain) NSString * selfID;                     //@synthesize selfID=_selfID - In the implementation block
@property (nonatomic,retain) NSString * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSDictionary * alertInfo;              //@synthesize alertInfo=_alertInfo - In the implementation block
@property (nonatomic,retain) NSNumber * status;                     //@synthesize status=_status - In the implementation block
-(NSString *)selfID;
-(void)setToken:(NSString *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)token;
-(void)setProfileID:(NSString *)arg1 ;
-(void)setSelfID:(NSString *)arg1 ;
-(NSDictionary *)alertInfo;
-(void)setAlertInfo:(NSDictionary *)arg1 ;
-(NSString *)profileID;
-(NSNumber *)status;
@end

