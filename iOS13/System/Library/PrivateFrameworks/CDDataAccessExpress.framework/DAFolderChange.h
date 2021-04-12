/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeType;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id<DAFolderChangeConsumer>)consumer;
-(void)setConsumer:(id<DAFolderChangeConsumer>)arg1 ;
-(void)setChangeType:(unsigned long long)arg1 ;
-(id)initFolderChangeWithChangeType:(unsigned long long)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(long long)arg5 consumer:(id)arg6 ;
-(NSString *)folderId;
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(void)setFolderId:(NSString *)arg1 ;
-(void)setParentFolderId:(NSString *)arg1 ;
-(NSString *)parentFolderId;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(BOOL)renameOnCollision;
-(unsigned)taskId;
-(void)setTaskId:(unsigned)arg1 ;
@end

