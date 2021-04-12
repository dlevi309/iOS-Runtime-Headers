/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, SKUIColorScheme, NSString, SKUILayoutCache;

@interface SKUIProductPageTableTextBoxSection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	BOOL _isExpanded;
	long long _stringIndex;
	NSString* _subtitle;
	SKUILayoutCache* _textLayoutCache;
	NSString* _title;

}

@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (assign,nonatomic) long long stringIndex;                          //@synthesize stringIndex=_stringIndex - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(long long)numberOfRowsInSection;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUILayoutCache *)textLayoutCache;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(void)setStringIndex:(long long)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)stringIndex;
@end

