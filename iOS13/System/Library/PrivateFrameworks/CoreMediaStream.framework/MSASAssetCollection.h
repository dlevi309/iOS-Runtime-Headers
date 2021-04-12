/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasComments;
	BOOL _isDeletable;
	BOOL _isMine;
	NSString* _GUID;
	NSString* _ctag;
	NSString* _albumGUID;
	NSArray* _assets;
	NSString* _fileName;
	NSString* _path;
	id _userInfo;
	NSDictionary* _metadata;
	long long _photoNumber;
	NSDate* _timestamp;
	NSString* _personID;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                    //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSArray * assets;                        //@synthesize assets=_assets - In the implementation block
@property (nonatomic,retain) NSString * fileName;                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) id userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) long long photoNumber;                   //@synthesize photoNumber=_photoNumber - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSString * fullName;                     //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * email;                        //@synthesize email=_email - In the implementation block
@property (assign,nonatomic) BOOL isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (assign,nonatomic) BOOL isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (assign,nonatomic) BOOL hasComments;                        //@synthesize hasComments=_hasComments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)assetCollectionWithAssetCollection:(id)arg1 ;
+(id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)path;
-(void)setUserInfo:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(BOOL)isDeletable;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)fullName;
-(BOOL)isVideo;
-(NSString *)email;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSArray *)assets;
-(void)setAssets:(NSArray *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)hasComments;
-(NSString *)personID;
-(void)setPersonID:(NSString *)arg1 ;
-(NSString *)GUID;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(BOOL)isAutoloopVideo;
-(BOOL)isPhotoIris;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)albumGUID;
-(id)mediaAssetType;
-(void)setIsDeletable:(BOOL)arg1 ;
-(void)setIsMine:(BOOL)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)isMine;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(id)initWithFileName:(id)arg1 path:(id)arg2 ;
-(BOOL)hasVideoAsset;
-(long long)photoNumber;
-(void)setPhotoNumber:(long long)arg1 ;
-(void)setHasComments:(BOOL)arg1 ;
-(id)MSASPProtocolDictionary;
@end

