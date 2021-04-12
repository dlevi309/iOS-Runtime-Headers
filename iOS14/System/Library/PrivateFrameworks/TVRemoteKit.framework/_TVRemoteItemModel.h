/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteKit.framework/TVRemoteKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol TVRemoteItem;
@class NSString, NSArray;

@interface _TVRemoteItemModel : NSObject <NSSecureCoding> {

	BOOL _group;
	id<TVRemoteItem> _item;
	NSString* _uuid;
	NSString* _title;
	long long _icon;
	long long _itemType;
	NSArray* _items;

}

@property (nonatomic,retain) id<TVRemoteItem> item;                  //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * uuid;                          //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long icon;                         //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) long long itemType;                     //@synthesize itemType=_itemType - In the implementation block
@property (assign,getter=isGroup,nonatomic) BOOL group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,copy) NSArray * items;                          //@synthesize items=_items - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroup:(BOOL)arg1 ;
-(NSString *)uuid;
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)isGroup;
-(id)init;
-(id<TVRemoteItem>)item;
-(long long)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(long long)arg1 ;
-(NSArray *)items;
-(void)setItemType:(long long)arg1 ;
-(void)setItem:(id<TVRemoteItem>)arg1 ;
-(id)description;
-(long long)itemType;
-(id)initWithItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(NSString *)title;
-(id)_stringForItemType:(long long)arg1 ;
@end

