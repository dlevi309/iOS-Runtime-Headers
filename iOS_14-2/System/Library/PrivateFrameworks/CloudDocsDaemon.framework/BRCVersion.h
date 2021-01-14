/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BRFieldCKInfo, NSString, NSData, NSSet, NSNumber, BRCUserRowID;

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding> {

	BRFieldCKInfo* _ckInfo;
	long long _mtime;
	NSString* _originalPOSIXName;
	long long _size;
	long long _thumbnailSize;
	NSData* _thumbnailSignature;
	NSData* _contentSignature;
	NSData* _xattrSignature;
	NSData* _quarantineInfo;
	NSSet* _conflictLoserEtags;
	NSData* _lazyXattr;
	NSNumber* _editedSinceShared;
	NSNumber* _lastEditorDeviceOrUserRowID;
	NSString* _lastEditorDeviceName;

}

@property (assign,nonatomic) long long mtime;                                     //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,retain) NSString * originalPOSIXName;                        //@synthesize originalPOSIXName=_originalPOSIXName - In the implementation block
@property (assign,nonatomic) long long size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long thumbnailSize;                             //@synthesize thumbnailSize=_thumbnailSize - In the implementation block
@property (nonatomic,retain) NSData * xattrSignature;                             //@synthesize xattrSignature=_xattrSignature - In the implementation block
@property (nonatomic,retain) NSData * quarantineInfo;                             //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,retain) NSData * contentSignature;                           //@synthesize contentSignature=_contentSignature - In the implementation block
@property (nonatomic,retain) NSData * thumbnailSignature;                         //@synthesize thumbnailSignature=_thumbnailSignature - In the implementation block
@property (nonatomic,retain) NSSet * conflictLoserEtags;                          //@synthesize conflictLoserEtags=_conflictLoserEtags - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorDeviceOrUserRowID;              //@synthesize lastEditorDeviceOrUserRowID=_lastEditorDeviceOrUserRowID - In the implementation block
@property (nonatomic,retain) NSNumber * lastEditorDeviceRowID; 
@property (nonatomic,retain) NSString * lastEditorDeviceName;                     //@synthesize lastEditorDeviceName=_lastEditorDeviceName - In the implementation block
@property (nonatomic,retain) BRCUserRowID * lastEditorRowID; 
@property (nonatomic,retain) BRFieldCKInfo * ckInfo;                              //@synthesize ckInfo=_ckInfo - In the implementation block
@property (nonatomic,readonly) BOOL isPackage; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,retain) NSData * lazyXattr;                                  //@synthesize lazyXattr=_lazyXattr - In the implementation block
@property (nonatomic,retain) NSNumber * editedSinceShared;                        //@synthesize editedSinceShared=_editedSinceShared - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)uti;
-(void)setThumbnailSize:(long long)arg1 ;
-(long long)mtime;
-(BOOL)isPackage;
-(id)initFromResultSet:(id)arg1 pos:(int)arg2 ;
-(long long)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(long long)arg1 ;
-(long long)thumbnailSize;
-(NSNumber *)editedSinceShared;
-(NSSet *)conflictLoserEtags;
-(BOOL)hasThumbnail;
-(void)setConflictLoserEtags:(NSSet *)arg1 ;
-(BRFieldCKInfo *)ckInfo;
-(id)initWithVersion:(id)arg1 ;
-(id)description;
-(NSString *)originalPOSIXName;
-(NSString *)lastEditorDeviceName;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithContext:(id)arg1 ;
-(void)setCkInfo:(BRFieldCKInfo *)arg1 ;
-(BRCUserRowID *)lastEditorRowID;
-(unsigned long long)diffAgainst:(id)arg1 ;
-(NSData *)xattrSignature;
-(void)setMtime:(long long)arg1 ;
-(BOOL)check:(id)arg1 logToFile:(_sFILE*)arg2 ;
-(BOOL)isEtagEqual:(id)arg1 ;
-(void)setXattrSignature:(NSData *)arg1 ;
-(NSData *)lazyXattr;
-(void)setLazyXattr:(NSData *)arg1 ;
-(BOOL)_hasLastEditorDeviceRowID;
-(BOOL)_hasLastEditorRowID;
-(NSNumber *)lastEditorDeviceRowID;
-(id)lastEditorUserIdentityWithDB:(id)arg1 ;
-(void)setLastEditorDeviceRowID:(NSNumber *)arg1 ;
-(void)setLastEditorRowID:(BRCUserRowID *)arg1 ;
-(id)lastEditorDeviceDisplayNameWithDB:(id)arg1 ;
-(id)lastEditorDisplayNameWithDB:(id)arg1 ;
-(id)displayNameWithoutExtension:(BOOL)arg1 ;
-(id)additionNameForItemID:(id)arg1 zoneID:(id)arg2 ;
-(BOOL)isSmallAndMostRecentClientsGenerateThumbnails;
-(void)setOriginalPOSIXName:(NSString *)arg1 ;
-(NSData *)thumbnailSignature;
-(void)setThumbnailSignature:(NSData *)arg1 ;
-(NSData *)contentSignature;
-(void)setContentSignature:(NSData *)arg1 ;
-(void)setEditedSinceShared:(NSNumber *)arg1 ;
-(NSNumber *)lastEditorDeviceOrUserRowID;
-(void)setLastEditorDeviceOrUserRowID:(NSNumber *)arg1 ;
-(void)setLastEditorDeviceName:(NSString *)arg1 ;
-(NSData *)quarantineInfo;
-(void)setQuarantineInfo:(NSData *)arg1 ;
@end

