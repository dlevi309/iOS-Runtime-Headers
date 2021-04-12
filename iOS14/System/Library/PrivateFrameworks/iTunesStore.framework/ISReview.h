/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface ISReview : NSObject <NSSecureCoding, NSCopying> {

	long long _assetType;
	NSString* _body;
	unsigned long long _bodyMaxLength;
	NSURL* _infoURL;
	unsigned long long _itemIdentifier;
	NSString* _nickname;
	BOOL _nicknameIsConfirmed;
	unsigned long long _nicknameMaxLength;
	float _rating;
	NSURL* _submitURL;
	NSString* _title;
	unsigned long long _titleMaxLength;

}

@property (nonatomic,readonly) BOOL hasSavedDraft; 
@property (nonatomic,retain) NSString * body;                                   //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * nickname;                               //@synthesize nickname=_nickname - In the implementation block
@property (assign,nonatomic) float rating;                                      //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long assetType;                               //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * infoURL;                                   //@synthesize infoURL=_infoURL - In the implementation block
@property (nonatomic,retain) NSURL * submitURL;                                 //@synthesize submitURL=_submitURL - In the implementation block
@property (assign,nonatomic) unsigned long long bodyMaxLength;                  //@synthesize bodyMaxLength=_bodyMaxLength - In the implementation block
@property (assign,nonatomic) BOOL nicknameIsConfirmed;                          //@synthesize nicknameIsConfirmed=_nicknameIsConfirmed - In the implementation block
@property (assign,nonatomic) unsigned long long nicknameMaxLength;              //@synthesize nicknameMaxLength=_nicknameMaxLength - In the implementation block
@property (assign,nonatomic) unsigned long long titleMaxLength;                 //@synthesize titleMaxLength=_titleMaxLength - In the implementation block
+(BOOL)supportsSecureCoding;
-(float)rating;
-(void)setBody:(NSString *)arg1 ;
-(unsigned long long)itemIdentifier;
-(long long)assetType;
-(NSString *)body;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAssetType:(long long)arg1 ;
-(NSString *)nickname;
-(void)setRating:(float)arg1 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(NSURL *)infoURL;
-(void)setNickname:(NSString *)arg1 ;
-(void)loadFromDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)title;
-(void)dealloc;
-(unsigned long long)bodyMaxLength;
-(unsigned long long)nicknameMaxLength;
-(NSURL *)submitURL;
-(unsigned long long)titleMaxLength;
-(BOOL)removeDraft;
-(BOOL)restoreFromDraft;
-(BOOL)saveAsDraft;
-(BOOL)hasSavedDraft;
-(BOOL)nicknameIsConfirmed;
-(void)setInfoURL:(NSURL *)arg1 ;
-(void)setNicknameIsConfirmed:(BOOL)arg1 ;
-(id)_draftsDirectoryPath;
-(id)_draftFileName;
-(void)setBodyMaxLength:(unsigned long long)arg1 ;
-(void)setNicknameMaxLength:(unsigned long long)arg1 ;
-(void)setSubmitURL:(NSURL *)arg1 ;
-(void)setTitleMaxLength:(unsigned long long)arg1 ;
-(void)mergeWithReview:(id)arg1 preferLocalValues:(BOOL)arg2 ;
@end

