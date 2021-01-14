/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMLinkedNotebook : FATObject {

	NSString* _shareName;
	NSString* _username;
	NSString* _shardId;
	NSString* _sharedNotebookGlobalId;
	NSString* _uri;
	NSString* _guid;
	NSNumber* _updateSequenceNum;
	NSString* _noteStoreUrl;
	NSString* _webApiUrlPrefix;
	NSString* _stack;
	NSNumber* _businessId;

}

@property (nonatomic,retain) NSString * shareName;                           //@synthesize shareName=_shareName - In the implementation block
@property (nonatomic,retain) NSString * username;                            //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSString * shardId;                             //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) NSString * sharedNotebookGlobalId;              //@synthesize sharedNotebookGlobalId=_sharedNotebookGlobalId - In the implementation block
@property (nonatomic,retain) NSString * uri;                                 //@synthesize uri=_uri - In the implementation block
@property (nonatomic,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                   //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                        //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * webApiUrlPrefix;                     //@synthesize webApiUrlPrefix=_webApiUrlPrefix - In the implementation block
@property (nonatomic,retain) NSString * stack;                               //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) NSNumber * businessId;                          //@synthesize businessId=_businessId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)uri;
-(NSString *)guid;
-(void)setStack:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setUri:(NSString *)arg1 ;
-(NSString *)stack;
-(NSString *)username;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
-(NSString *)shardId;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(NSString *)webApiUrlPrefix;
-(void)setWebApiUrlPrefix:(NSString *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(void)setShardId:(NSString *)arg1 ;
-(NSString *)sharedNotebookGlobalId;
-(void)setSharedNotebookGlobalId:(NSString *)arg1 ;
-(NSString *)shareName;
-(void)setShareName:(NSString *)arg1 ;
@end

