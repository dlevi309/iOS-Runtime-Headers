/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSNumber;

@interface NMSFTPFile : NSObject <NSCopying> {

	BOOL _isDirectory;
	NSString* _filename;
	NSDate* _modificationDate;
	NSDate* _lastAccess;
	NSNumber* _fileSize;
	unsigned long long _ownerUserID;
	unsigned long long _ownerGroupID;
	NSString* _permissions;
	unsigned long long _flags;

}

@property (nonatomic,retain) NSString * filename;                          //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                             //@synthesize isDirectory=_isDirectory - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                    //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,retain) NSDate * lastAccess;                          //@synthesize lastAccess=_lastAccess - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                          //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long ownerUserID;               //@synthesize ownerUserID=_ownerUserID - In the implementation block
@property (assign,nonatomic) unsigned long long ownerGroupID;              //@synthesize ownerGroupID=_ownerGroupID - In the implementation block
@property (nonatomic,retain) NSString * permissions;                       //@synthesize permissions=_permissions - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                     //@synthesize flags=_flags - In the implementation block
+(id)fileWithName:(id)arg1 ;
-(NSDate *)modificationDate;
-(long long)compare:(id)arg1 ;
-(NSDate *)lastAccess;
-(void)setLastAccess:(NSDate *)arg1 ;
-(id)initWithFilename:(id)arg1 ;
-(NSString *)filename;
-(unsigned long long)flags;
-(NSNumber *)fileSize;
-(void)setIsDirectory:(BOOL)arg1 ;
-(id)description;
-(void)setFilename:(NSString *)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(BOOL)isDirectory;
-(void)setPermissions:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)permissions;
-(BOOL)isEqual:(id)arg1 ;
-(void)setOwnerUserID:(unsigned long long)arg1 ;
-(unsigned long long)ownerUserID;
-(void)populateValuesFromSFTPAttributes:(LIBSSH2_SFTP_ATTRIBUTES)arg1 ;
-(id)convertPermissionToSymbolicNotation:(unsigned long long)arg1 ;
-(char)filetypeletter:(unsigned long long)arg1 ;
-(unsigned long long)ownerGroupID;
-(void)setOwnerGroupID:(unsigned long long)arg1 ;
@end

