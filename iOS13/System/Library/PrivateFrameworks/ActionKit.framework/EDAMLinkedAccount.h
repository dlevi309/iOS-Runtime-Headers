/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMLinkedAccount : FATObject {

	NSNumber* _inAccountUserId;
	NSString* _shardId;
	NSString* _guid;
	NSNumber* _updateSequenceNum;
	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;

}

@property (nonatomic,retain) NSNumber * inAccountUserId;                //@synthesize inAccountUserId=_inAccountUserId - In the implementation block
@property (nonatomic,retain) NSString * shardId;                        //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) NSString * guid;                           //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                   //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * webApiUrlPrefix;                //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSNumber *)inAccountUserId;
-(void)setInAccountUserId:(NSNumber *)arg1 ;
-(NSString *)shardId;
-(void)setShardId:(NSString *)arg1 ;
@end

