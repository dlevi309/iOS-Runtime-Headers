/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SSMetricsEventFieldProvider.h>

@class SKUICountdown, SKUIItem, NSNumber, NSString, NSURL, NSDictionary;

@interface SKUILink : NSObject <SSMetricsEventFieldProvider> {

	SKUICountdown* _countdown;
	SKUIItem* _item;
	NSNumber* _itemIdentifier;
	NSString* _target;
	NSString* _title;
	NSURL* _url;

}

@property (getter=isActionable,nonatomic,readonly) BOOL actionable; 
@property (nonatomic,readonly) SKUIItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSNumber * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * linkDictionary; 
@property (nonatomic,readonly) NSString * targetString;                          //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURL:(id)arg1 ;
-(SKUIItem *)item;
-(NSNumber *)itemIdentifier;
-(NSURL *)URL;
-(NSString *)title;
-(BOOL)isActionable;
-(id)valueForMetricsField:(id)arg1 ;
-(NSDictionary *)linkDictionary;
-(NSString *)targetString;
-(void)_setItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 targetString:(id)arg3 ;
-(id)initWithLinkDictionary:(id)arg1 ;
@end

