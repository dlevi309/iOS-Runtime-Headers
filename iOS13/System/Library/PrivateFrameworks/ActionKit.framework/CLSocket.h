/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSURL, NSDictionary;

@interface CLSocket : NSObject {

	NSString* _APIKey;
	long long _appID;
	NSURL* _authURL;
	NSDictionary* _channels;

}

@property (nonatomic,copy) NSString * APIKey;                      //@synthesize APIKey=_APIKey - In the implementation block
@property (assign,nonatomic) long long appID;                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,retain) NSURL * authURL;                      //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,retain) NSDictionary * channels;              //@synthesize channels=_channels - In the implementation block
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)channels;
-(void)setChannels:(NSDictionary *)arg1 ;
-(NSURL *)authURL;
-(void)setAuthURL:(NSURL *)arg1 ;
-(long long)appID;
-(void)setAppID:(long long)arg1 ;
-(NSString *)APIKey;
-(void)setAPIKey:(NSString *)arg1 ;
@end

