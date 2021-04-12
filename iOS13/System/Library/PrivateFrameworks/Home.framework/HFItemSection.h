/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFDiffableItemGroup.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString, NSArray, NSAttributedString, NSDictionary;

@interface HFItemSection : NSObject <HFDiffableItemGroup, NSCopying, NSMutableCopying, NAIdentifiable> {

	NSString* _identifier;
	NSString* _headerTitle;
	NSString* _footerTitle;
	NSAttributedString* _attributedFooterTitle;
	NSDictionary* _userInfo;
	NSArray* _items;

}

@property (nonatomic,copy) NSString * headerTitle;                                  //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                                  //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedFooterTitle;              //@synthesize attributedFooterTitle=_attributedFooterTitle - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy,readonly) NSArray * diffableItems; 
+(id)na_identity;
+(/*^block*/id)defaultItemComparator;
+(/*^block*/id)itemResultManualSortComparator;
+(id)filterSections:(id)arg1 toDisplayedItems:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSString *)groupIdentifier;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
-(NSArray *)diffableItems;
-(NSAttributedString *)attributedFooterTitle;
-(void)setAttributedFooterTitle:(NSAttributedString *)arg1 ;
-(id)_createCopyMutable:(BOOL)arg1 ;
@end

