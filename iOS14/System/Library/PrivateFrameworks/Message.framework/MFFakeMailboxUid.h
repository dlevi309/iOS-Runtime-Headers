/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFMailboxUid.h>

@class NSString;

@interface MFFakeMailboxUid : MFMailboxUid {

	BOOL _fakeIsSpecialMailboxUid;
	NSString* _displayName;
	NSString* _fakeFullPath;
	NSString* _fakeURLString;
	long long _fakeMailboxID;

}

@property (nonatomic,copy) NSString * fakeFullPath;                     //@synthesize fakeFullPath=_fakeFullPath - In the implementation block
@property (nonatomic,copy) NSString * fakeURLString;                    //@synthesize fakeURLString=_fakeURLString - In the implementation block
@property (assign,nonatomic) BOOL fakeIsSpecialMailboxUid;              //@synthesize fakeIsSpecialMailboxUid=_fakeIsSpecialMailboxUid - In the implementation block
@property (assign,nonatomic) long long fakeMailboxID;                   //@synthesize fakeMailboxID=_fakeMailboxID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
-(id)URLString;
-(id)fullPath;
-(id)store;
-(BOOL)isSpecialMailboxUid;
-(BOOL)isStore;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)URL;
-(void)setFakeFullPath:(NSString *)arg1 ;
-(void)setFakeURLString:(NSString *)arg1 ;
-(void)setFakeMailboxID:(long long)arg1 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 mailboxID:(long long)arg5 ;
-(void)setFakeIsSpecialMailboxUid:(BOOL)arg1 ;
-(long long)fakeMailboxID;
-(NSString *)fakeURLString;
-(NSString *)fakeFullPath;
-(BOOL)fakeIsSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 ;
-(long long)mailboxID;
-(NSString *)displayName;
@end

