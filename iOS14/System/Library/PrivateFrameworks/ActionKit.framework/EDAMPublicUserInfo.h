/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMPublicUserInfo : FATObject {

	NSNumber* _userId;
	NSString* _shardId;
	NSNumber* _privilege;
	NSNumber* _serviceLevel;
	NSString* _username;
	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;

}

@property (nonatomic,retain) NSNumber * userId;                       //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * shardId;                      //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                    //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * serviceLevel;                 //@synthesize serviceLevel=_serviceLevel - In the implementation block
@property (nonatomic,retain) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                 //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * webApiUrlPrefix;              //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)userId;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(NSString *)shardId;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
-(void)setShardId:(NSString *)arg1 ;
-(NSNumber *)serviceLevel;
-(void)setServiceLevel:(NSNumber *)arg1 ;
@end

