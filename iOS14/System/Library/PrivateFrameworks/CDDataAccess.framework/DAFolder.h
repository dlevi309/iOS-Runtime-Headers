/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
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
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(void)setFolderID:(NSString *)arg1 ;
-(NSString *)folderID;
-(id)description;
-(id)parentMailboxID;
-(BOOL)isDefault;
-(void)setParentFolderID:(NSString *)arg1 ;
-(BOOL)hasRemoteChanges;
-(void)setHasRemoteChanges:(BOOL)arg1 ;
-(void)setIsDefault:(BOOL)arg1 ;
-(unsigned long long)hash;
-(NSString *)parentFolderID;
-(NSString *)folderName;
-(id)mailboxID;
-(void)setFolderName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

