/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPListClientTemplateDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@protocol CPListTemplateDelegate;
@class NSArray, NSString, NSMutableSet, NAFuture, CPBarButton;

@interface CPListTemplate : CPTemplate <CPListClientTemplateDelegate, CPBarButtonProviding> {

	id<CPListTemplateDelegate> _delegate;
	NSArray* _sections;
	NSString* _title;
	NSArray* _emptyViewTitleVariants;
	NSArray* _emptyViewSubtitleVariants;
	NSMutableSet* _itemsToReload;

}

@property (nonatomic,retain) NSMutableSet * itemsToReload;                            //@synthesize itemsToReload=_itemsToReload - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (assign,nonatomic,__weak) id<CPListTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sections;                               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionCount; 
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,copy) NSArray * emptyViewTitleVariants;                          //@synthesize emptyViewTitleVariants=_emptyViewTitleVariants - In the implementation block
@property (nonatomic,copy) NSArray * emptyViewSubtitleVariants;                       //@synthesize emptyViewSubtitleVariants=_emptyViewSubtitleVariants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)maximumItemCount;
+(unsigned long long)maximumSectionCount;
-(id<CPListTemplateDelegate>)delegate;
-(id)indexPathForItem:(id)arg1 ;
-(NSArray *)sections;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performUpdate;
-(unsigned long long)itemCount;
-(void)setDelegate:(id<CPListTemplateDelegate>)arg1 ;
-(id)initWithTitle:(id)arg1 sections:(id)arg2 ;
-(void)updateSections:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(unsigned long long)sectionCount;
-(void)listTemplate:(id)arg1 didSelectListItemWithIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)listTemplate:(id)arg1 didSelectImageAtIndex:(unsigned long long)arg2 inImageRowItem:(id)arg3 ;
-(void)_setItemNeedsUpdate:(id)arg1 ;
-(void)_linkItemsInSection:(id)arg1 ;
-(id)_sectionsByTrimmingAndLinkingSections:(id)arg1 ;
-(NSArray *)emptyViewTitleVariants;
-(NSArray *)emptyViewSubtitleVariants;
-(NSMutableSet *)itemsToReload;
-(id)_itemForHostItemWithIdentifier:(id)arg1 ;
-(void)setEmptyViewTitleVariants:(NSArray *)arg1 ;
-(void)setEmptyViewSubtitleVariants:(NSArray *)arg1 ;
-(void)setItemsToReload:(NSMutableSet *)arg1 ;
@end

