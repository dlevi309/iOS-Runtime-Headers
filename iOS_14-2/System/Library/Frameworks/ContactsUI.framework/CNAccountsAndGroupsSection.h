/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSArray, NSString;

@interface CNAccountsAndGroupsSection : NSObject {

	NSArray* _items;
	/*^block*/id _titleProvider;
	NSString* _title;
	NSString* _identifier;

}

@property (nonatomic,copy) id titleProvider;                     //@synthesize titleProvider=_titleProvider - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSArray * items;                    //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setItems:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)items;
-(unsigned long long)hash;
-(id)titleProvider;
-(void)setTitleProvider:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

