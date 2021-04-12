/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASFolder : ASItem <NSSecureCoding> {

	BOOL _renameOnCollision;
	int _folderType;
	int _localID;
	NSString* _serverID;
	NSString* _parentID;
	NSString* _displayName;
	NSString* _localUUID;
	unsigned long long _changeType;
	long long _dataclass;

}

@property (nonatomic,copy) NSString * parentID;                          //@synthesize parentID=_parentID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int folderType;                             //@synthesize folderType=_folderType - In the implementation block
@property (assign,nonatomic) long long dataclass;                        //@synthesize dataclass=_dataclass - In the implementation block
@property (assign,nonatomic) int localID;                                //@synthesize localID=_localID - In the implementation block
@property (nonatomic,copy) NSString * serverID;                          //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,copy) NSString * localUUID;                         //@synthesize localUUID=_localUUID - In the implementation block
@property (assign,nonatomic) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL renameOnCollision;                     //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeType;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setChangeType:(unsigned long long)arg1 ;
-(NSString *)parentID;
-(void)setParentID:(NSString *)arg1 ;
-(int)localID;
-(NSString *)serverID;
-(void)setServerID:(NSString *)arg1 ;
-(long long)dataclass;
-(void)setDataclass:(long long)arg1 ;
-(int)folderType;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(BOOL)renameOnCollision;
-(void)setFolderType:(int)arg1 ;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setLocalID:(int)arg1 ;
-(id)_folderTypeString;
-(void)setFolderTypeNumber:(id)arg1 ;
-(BOOL)mayContainDataclasses:(long long)arg1 ;
-(id)initWithFolderType:(int)arg1 serverID:(id)arg2 parentID:(id)arg3 displayName:(id)arg4 localID:(int)arg5 ;
-(NSString *)localUUID;
-(void)setLocalUUID:(NSString *)arg1 ;
@end

