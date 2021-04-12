/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)appID;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)authURL;
-(NSString *)APIKey;
-(void)setChannels:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)channels;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAppID:(long long)arg1 ;
-(void)dealloc;
-(void)setAPIKey:(NSString *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
@end

