/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUItem, SUItemList, SUStorePageProtocol, SUPageSectionGroup, NSString;

@interface SUStructuredPage : NSObject <NSCopying> {

	BOOL _artworkShouldFitWidth;
	double _artworkWidth;
	BOOL _didShowDialog;
	long long _displayStyle;
	SUItem* _item;
	SUItemList* _itemList;
	SUStorePageProtocol* _protocol;
	SUPageSectionGroup* _sectionsGroup;
	BOOL _shouldHideSignInButton;
	NSString* _title;
	long long _type;
	BOOL _wantsIndexBar;

}

@property (nonatomic,readonly) BOOL hasDisplayableContent; 
@property (nonatomic,retain) SUItem * item;                                   //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SUItemList * itemList;                           //@synthesize itemList=_itemList - In the implementation block
@property (nonatomic,retain) SUPageSectionGroup * sectionsGroup;              //@synthesize sectionsGroup=_sectionsGroup - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL artworkShouldFitWidth;                    //@synthesize artworkShouldFitWidth=_artworkShouldFitWidth - In the implementation block
@property (nonatomic,readonly) double artworkWidth;                           //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (nonatomic,readonly) long long displayStyle;                        //@synthesize displayStyle=_displayStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideSignInButton;                   //@synthesize shouldHideSignInButton=_shouldHideSignInButton - In the implementation block
@property (assign,nonatomic) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL wantsIndexBar;                            //@synthesize wantsIndexBar=_wantsIndexBar - In the implementation block
@property (nonatomic,readonly) BOOL didShowDialog;                            //@synthesize didShowDialog=_didShowDialog - In the implementation block
@property (nonatomic,retain) SUStorePageProtocol * protocol;                  //@synthesize protocol=_protocol - In the implementation block
+(long long)pageTypeForStorePageDictionary:(id)arg1 ;
+(long long)pageTypeForStorePageString:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SUStorePageProtocol *)protocol;
-(SUItem *)item;
-(void)setItem:(SUItem *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setProtocol:(SUStorePageProtocol *)arg1 ;
-(long long)displayStyle;
-(SUItemList *)itemList;
-(void)setItemList:(SUItemList *)arg1 ;
-(BOOL)loadFromDictionary:(id)arg1 ;
-(BOOL)hasDisplayableContent;
-(void)_parseItemsFromDictionary:(id)arg1 ;
-(void)_parseTemplateParametersFromDictionary:(id)arg1 ;
-(void)_parseProtocolFromDictionary:(id)arg1 ;
-(void)setSectionsGroup:(SUPageSectionGroup *)arg1 ;
-(BOOL)didShowDialog;
-(id)_copyItemFromDictionary:(id)arg1 ;
-(long long)_displayStyleForString:(id)arg1 ;
-(BOOL)artworkShouldFitWidth;
-(double)artworkWidth;
-(SUPageSectionGroup *)sectionsGroup;
-(BOOL)shouldHideSignInButton;
-(BOOL)wantsIndexBar;
@end

