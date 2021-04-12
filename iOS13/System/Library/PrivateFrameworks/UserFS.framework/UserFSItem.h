/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
*/


#import <UserFS/UserFS-Structs.h>
@class UserFSVolume, NSString;

@interface UserFSItem : NSObject {

	BOOL _isDirectory;
	BOOL _locked;
	UserFSVolume* _volume;
	NSString* _path;
	NSString* _name;
	unsigned long long _length;
	timespec _createdDate;
	timespec _modifiedDate;

}

@property (nonatomic,retain) UserFSVolume * volume;                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,copy) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL isDirectory;                         //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) unsigned long long length;                //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) timespec createdDate;                     //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) timespec modifiedDate;                    //@synthesize modifiedDate=_modifiedDate - In the implementation block
+(id)_itemWithVolume:(id)arg1 path:(id)arg2 properties:(id)arg3 ;
-(unsigned long long)length;
-(NSString *)name;
-(void)setLength:(unsigned long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)path;
-(BOOL)isDirectory;
-(void)setPath:(NSString *)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(BOOL)isLocked;
-(UserFSVolume *)volume;
-(void)setVolume:(UserFSVolume *)arg1 ;
-(timespec)createdDate;
-(void)setCreatedDate:(timespec)arg1 ;
-(void)setIsDirectory:(BOOL)arg1 ;
-(timespec)modifiedDate;
-(void)setModifiedDate:(timespec)arg1 ;
@end

