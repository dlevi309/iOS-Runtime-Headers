/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)URL;
-(NSString *)displayName;
-(id)store;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)fullPath;
-(id)URLString;
-(long long)mailboxID;
-(BOOL)isStore;
-(BOOL)isSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 ;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(BOOL)arg4 mailboxID:(long long)arg5 ;
-(void)setFakeURLString:(NSString *)arg1 ;
-(void)setFakeFullPath:(NSString *)arg1 ;
-(void)setFakeIsSpecialMailboxUid:(BOOL)arg1 ;
-(void)setFakeMailboxID:(long long)arg1 ;
-(long long)fakeMailboxID;
-(NSString *)fakeURLString;
-(NSString *)fakeFullPath;
-(BOOL)fakeIsSpecialMailboxUid;
-(id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 ;
@end

