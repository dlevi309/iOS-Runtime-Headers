/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol DAFolderChangeConsumer;
@class NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {

	BOOL _renameOnCollision;
	unsigned _taskId;
	unsigned long long _changeType;
	NSString* _folderId;
	NSString* _parentFolderId;
	NSString* _displayName;
	long long _dataclass;
	id<DAFolderChangeConsumer> _consumer;

}

@property (assign,nonatomic) unsigned long long changeType;                           //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) NSString * folderId;                                     //@synthesize folderId=_folderId - In the implementation block
@property (nonatomic,retain) NSString * parentFolderId;                               //@synthesize parentFolderId=_parentFolderId - In the implementation block
@property (nonatomic,retain) NSString * displayName;                                  //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long dataclass;                                     //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) unsigned taskId;                                         //@synthesize taskId=_taskId - In the implementation block
@property (assign,nonatomic) BOOL renameOnCollision;                                  //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
@property (assign,nonatomic,__weak) id<DAFolderChangeConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)dataclass;
-(void)setChangeType:(unsigned long long)arg1 ;
-(void)setDataclass:(long long)arg1 ;
-(unsigned long long)changeType;
-(unsigned)taskId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setTaskId:(unsigned)arg1 ;
-(void)setParentFolderId:(NSString *)arg1 ;
-(NSString *)parentFolderId;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(BOOL)renameOnCollision;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)folderId;
-(id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6 ;
-(id<DAFolderChangeConsumer>)consumer;
-(void)setFolderId:(NSString *)arg1 ;
-(void)setConsumer:(id<DAFolderChangeConsumer>)arg1 ;
-(NSString *)displayName;
@end

