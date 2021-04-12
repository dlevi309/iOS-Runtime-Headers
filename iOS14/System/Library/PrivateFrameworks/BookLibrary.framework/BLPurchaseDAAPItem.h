/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/

#import <BookLibrary/BookLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSMutableDictionary, NSNumber, NSDate;

@interface BLPurchaseDAAPItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _songalbum;
	NSString* _songartist;
	NSString* _songalbumartist;
	unsigned long long _itemID;
	unsigned char _downloadStatus;
	unsigned _containerItemID;
	unsigned long long _songalbumid;
	struct {
		unsigned itemHasVideo : 1;
	}  _itemFlags;
	BOOL _isFrozen;
	NSDictionary* _frozenInfo;
	NSMutableDictionary* _mutableInfo;

}

@property (nonatomic,retain) NSMutableDictionary * mutableInfo;              //@synthesize mutableInfo=_mutableInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * frozenInfo;                      //@synthesize frozenInfo=_frozenInfo - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo; 
@property (nonatomic,retain) NSString * songalbum;                           //@synthesize songalbum=_songalbum - In the implementation block
@property (nonatomic,retain) NSString * songartist;                          //@synthesize songartist=_songartist - In the implementation block
@property (nonatomic,retain) NSString * songalbumartist;                     //@synthesize songalbumartist=_songalbumartist - In the implementation block
@property (assign,nonatomic) unsigned long long itemID;                      //@synthesize itemID=_itemID - In the implementation block
@property (assign,nonatomic) unsigned char downloadStatus;                   //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (assign,nonatomic) unsigned long long songalbumid;                 //@synthesize songalbumid=_songalbumid - In the implementation block
@property (assign,nonatomic) unsigned containerItemID;                       //@synthesize containerItemID=_containerItemID - In the implementation block
@property (nonatomic,retain) NSNumber * hasVideo; 
@property (nonatomic,readonly) int mediaKind; 
@property (nonatomic,readonly) NSDate * expectedDate; 
+(BOOL)supportsSecureCoding;
+(id)item;
+(id)itemWithItem:(id)arg1 ;
-(void)freeze;
-(id)dictionaryRepresentation;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)thaw;
-(void)setHasVideo:(NSNumber *)arg1 ;
-(int)mediaKind;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSDate *)expectedDate;
-(NSString *)name;
-(id)description;
-(unsigned long long)itemID;
-(id)objectForKey:(id)arg1 ;
-(NSDictionary *)additionalInfo;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)downloadStatus;
-(void)setName:(NSString *)arg1 ;
-(void)setDownloadStatus:(unsigned char)arg1 ;
-(void)setContainerItemID:(unsigned)arg1 ;
-(void)setSongalbum:(NSString *)arg1 ;
-(void)setSongartist:(NSString *)arg1 ;
-(void)setSongalbumartist:(NSString *)arg1 ;
-(void)setSongalbumid:(unsigned long long)arg1 ;
-(NSString *)songalbum;
-(NSString *)songartist;
-(void)updateItemWithItem:(id)arg1 ;
-(unsigned)containerItemID;
-(NSDictionary *)frozenInfo;
-(NSMutableDictionary *)mutableInfo;
-(void)setFrozenInfo:(NSDictionary *)arg1 ;
-(void)setMutableInfo:(NSMutableDictionary *)arg1 ;
-(NSString *)songalbumartist;
-(unsigned long long)songalbumid;
-(void)updateItemWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)hasVideo;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

