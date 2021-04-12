/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)position;
-(void)setFolderID:(long long)arg1 ;
-(id)init;
-(long long)folderID;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(void)setPosition:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(id)initWithFolderID:(long long)arg1 ;
-(BOOL)syncToMobile;
-(void)setSyncToMobile:(BOOL)arg1 ;
@end

