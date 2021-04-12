/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface ENLinkedNotebookRef : NSObject <NSCoding> {

	NSString* _guid;
	NSString* _noteStoreUrl;
	NSString* _shardId;
	NSString* _sharedNotebookGlobalId;

}

@property (nonatomic,retain) NSString * guid;                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * noteStoreUrl;                        //@synthesize noteStoreUrl=_noteStoreUrl - In the implementation block
@property (nonatomic,retain) NSString * shardId;                             //@synthesize shardId=_shardId - In the implementation block
@property (nonatomic,retain) NSString * sharedNotebookGlobalId;              //@synthesize sharedNotebookGlobalId=_sharedNotebookGlobalId - In the implementation block
+(id)linkedNotebookRefFromLinkedNotebook:(id)arg1 ;
-(NSString *)guid;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)shardId;
-(void)setGuid:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)noteStoreUrl;
-(void)setNoteStoreUrl:(NSString *)arg1 ;
-(void)setShardId:(NSString *)arg1 ;
-(NSString *)sharedNotebookGlobalId;
-(void)setSharedNotebookGlobalId:(NSString *)arg1 ;
@end

