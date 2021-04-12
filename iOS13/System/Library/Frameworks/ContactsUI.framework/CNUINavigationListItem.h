/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <libobjc.A.dylib/CNUINavigationListItemContent.h>

@protocol CNUINavigationListItemContent;
@class NSString, UIImage, NSArray;

@interface CNUINavigationListItem : NSObject <CNUINavigationListItemContent> {

	id<CNUINavigationListItemContent> _content;
	CNUINavigationListItem* _parent;
	NSString* _identifier;
	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	CNUINavigationListItem* _defaultItem;
	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CNUINavigationListItemContent> content;                //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) CNUINavigationListItem * parent;                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) UIImage * image;                                          //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic,__weak) CNUINavigationListItem * defaultItem;              //@synthesize defaultItem=_defaultItem - In the implementation block
@property (nonatomic,retain) NSArray * items;                                          //@synthesize items=_items - In the implementation block
+(id)itemForActionItem:(id)arg1 isGrouped:(BOOL)arg2 ;
+(id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(BOOL)arg2 ;
+(id)navigationListItemsForUserActionListModel:(id)arg1 ;
+(id)navigationListItemForContactProperty:(id)arg1 ;
-(id)init;
-(CNUINavigationListItem *)parent;
-(void)setParent:(CNUINavigationListItem *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)subtitle;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id<CNUINavigationListItemContent>)content;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 ;
-(void)setContent:(id<CNUINavigationListItemContent>)arg1 ;
-(CNUINavigationListItem *)defaultItem;
-(void)setDefaultItem:(CNUINavigationListItem *)arg1 ;
@end

