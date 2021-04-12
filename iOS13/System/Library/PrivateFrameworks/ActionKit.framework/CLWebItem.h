/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, UIImage, NSDate;

@interface CLWebItem : NSObject <NSCopying, NSCoding> {

	NSString* _name;
	long long _type;
	NSURL* _contentURL;
	NSString* _mimeType;
	long long _viewCount;
	NSURL* _remoteURL;
	NSURL* _href;
	NSURL* _URL;
	NSURL* _iconURL;
	UIImage* _icon;
	BOOL _trashed;
	BOOL _private;
	NSDate* _createdAt;
	NSDate* _updatedAt;
	NSDate* _deletedAt;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSURL * contentURL;                         //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                          //@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) long long viewCount;                        //@synthesize viewCount=_viewCount - In the implementation block
@property (nonatomic,retain) NSURL * remoteURL;                          //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSURL * href;                               //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) NSURL * iconURL;                            //@synthesize iconURL=_iconURL - In the implementation block
@property (nonatomic,copy) UIImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isTrashed,nonatomic) BOOL trashed;              //@synthesize trashed=_trashed - In the implementation block
@property (assign,getter=isPrivate,nonatomic) BOOL private;              //@synthesize private=_private - In the implementation block
@property (nonatomic,retain) NSDate * createdAt;                         //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,retain) NSDate * updatedAt;                         //@synthesize updatedAt=_updatedAt - In the implementation block
@property (nonatomic,retain) NSDate * deletedAt;                         //@synthesize deletedAt=_deletedAt - In the implementation block
+(id)webItem;
+(id)webItemWithName:(id)arg1 ;
+(id)webItemWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(NSURL *)href;
-(void)setHref:(NSURL *)arg1 ;
-(BOOL)isPrivate;
-(BOOL)isTrashed;
-(NSDate *)createdAt;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSURL *)iconURL;
-(void)setIconURL:(NSURL *)arg1 ;
-(long long)viewCount;
-(void)setViewCount:(long long)arg1 ;
-(void)setTrashed:(BOOL)arg1 ;
-(NSURL *)remoteURL;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(void)setPrivate:(BOOL)arg1 ;
-(NSDate *)updatedAt;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 type:(long long)arg2 viewCount:(long long)arg3 ;
-(NSDate *)deletedAt;
-(void)setDeletedAt:(NSDate *)arg1 ;
@end

