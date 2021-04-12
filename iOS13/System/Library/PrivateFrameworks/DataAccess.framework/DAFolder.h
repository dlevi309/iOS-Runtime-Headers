/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
*/


@class NSString;

@interface DAFolder : NSObject {

	BOOL _isDefault;
	BOOL _hasRemoteChanges;
	NSString* _folderName;
	NSString* _folderID;
	NSString* _parentFolderID;
	long long _dataclass;

}

@property (assign,nonatomic) BOOL hasRemoteChanges;                //@synthesize hasRemoteChanges=_hasRemoteChanges - In the implementation block
@property (nonatomic,copy) NSString * folderName;                  //@synthesize folderName=_folderName - In the implementation block
@property (nonatomic,copy) NSString * folderID;                    //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * parentFolderID;              //@synthesize parentFolderID=_parentFolderID - In the implementation block
@property (assign,nonatomic) long long dataclass;                  //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) BOOL isDefault;                       //@synthesize isDefault=_isDefault - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)folderID;
-(void)setFolderID:(NSString *)arg1 ;
-(BOOL)isDefault;
-(void)setIsDefault:(BOOL)arg1 ;
-(NSString *)parentFolderID;
-(NSString *)folderName;
-(id)mailboxID;
-(void)setFolderName:(NSString *)arg1 ;
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(id)parentMailboxID;
-(void)setParentFolderID:(NSString *)arg1 ;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
@end

