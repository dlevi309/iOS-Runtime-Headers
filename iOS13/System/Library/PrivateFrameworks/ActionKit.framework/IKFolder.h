/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface IKFolder : NSObject {

	long long _folderID;
	NSString* _title;
	BOOL _syncToMobile;
	unsigned long long _position;

}

@property (assign,nonatomic) long long folderID;                       //@synthesize folderID=_folderID - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL syncToMobile;                        //@synthesize syncToMobile=_syncToMobile - In the implementation block
@property (assign,nonatomic) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)unreadFolder;
+(id)starredFolder;
+(id)archiveFolder;
+(id)folderWithFolderID:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)position;
-(void)setPosition:(unsigned long long)arg1 ;
-(long long)folderID;
-(void)setFolderID:(long long)arg1 ;
-(id)initWithFolderID:(long long)arg1 ;
-(BOOL)syncToMobile;
-(void)setSyncToMobile:(BOOL)arg1 ;
@end

