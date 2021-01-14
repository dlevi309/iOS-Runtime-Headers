/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString;

@interface EDAMUserUrls : FATObject {

	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;
	NSString* _userStoreUrl;
	NSString* _utilityUrl;
	NSString* _messageStoreUrl;
	NSString* _userWebSocketUrl;
	NSString* _communicationEngineUrl;

}

@property (nonatomic,retain) NSString * noteStoreUrl;                        //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * webApiUrlPrefix;                     //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
@property (nonatomic,retain) NSString * userStoreUrl;                        //@synthesize userStoreUrl=_userStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * utilityUrl;                          //@synthesize utilityUrl=_utilityUrl - In the implementation block
@property (nonatomic,retain) NSString * messageStoreUrl;                     //@synthesize messageStoreUrl=_messageStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * userWebSocketUrl;                    //@synthesize userWebSocketUrl=_userWebSocketUrl - In the implementation block
@property (nonatomic,retain) NSString * communicationEngineUrl;              //@synthesize communicationEngineUrl=_communicationEngineUrl - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
-(NSString *)userStoreUrl;
-(void)setUserStoreUrl:(NSString *)arg1 ;
-(NSString *)utilityUrl;
-(void)setUtilityUrl:(NSString *)arg1 ;
-(NSString *)messageStoreUrl;
-(void)setMessageStoreUrl:(NSString *)arg1 ;
-(NSString *)userWebSocketUrl;
-(void)setUserWebSocketUrl:(NSString *)arg1 ;
-(NSString *)communicationEngineUrl;
-(void)setCommunicationEngineUrl:(NSString *)arg1 ;
@end

