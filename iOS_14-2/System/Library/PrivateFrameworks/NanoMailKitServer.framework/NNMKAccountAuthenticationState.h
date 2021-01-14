/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@class NSString;

@interface NNMKAccountAuthenticationState : NSObject {

	NSString* _accountId;
	unsigned long long _state;
	NSString* _displayName;
	NSString* _subsectionId;

}

@property (nonatomic,copy) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * subsectionId;               //@synthesize subsectionId=_subsectionId - In the implementation block
-(void)setAccountId:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(NSString *)accountId;
-(NSString *)displayName;
-(void)setSubsectionId:(NSString *)arg1 ;
-(NSString *)subsectionId;
@end

