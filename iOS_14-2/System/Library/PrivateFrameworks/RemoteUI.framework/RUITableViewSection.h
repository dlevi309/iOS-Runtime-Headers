/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RUIElement.h>
#import <libobjc.A.dylib/RUIHeaderDelegate.h>
#import <libobjc.A.dylib/RUITableFooterDelegate.h>

@protocol RUIHeader, RemoteUITableFooter;
@class NSMutableArray, RUITableViewHeaderFooterView, NSNumber, UIView, RUITableViewRow, RUIElement, RUISubHeaderElement, RUIDetailHeaderElement, RUITableView, NSArray;

@interface RUITableViewSection : RUIElement <RUIHeaderDelegate, RUITableFooterDelegate> {

	NSMutableArray* _rows;
	long long _disclosureLimit;
	RUITableViewHeaderFooterView* _containerizedHeaderView;
	RUITableViewHeaderFooterView* _containerizedFooterView;
	NSNumber* _drawsTopSeparator;
	BOOL _configured;
	UIView*<RUIHeader> _headerView;
	UIView*<RemoteUITableFooter> _footerView;
	double _headerHeight;
	double _footerHeight;
	RUITableViewRow* _showAllRow;
	RUIElement* _header;
	RUISubHeaderElement* _subHeader;
	RUIDetailHeaderElement* _detailHeader;
	RUIElement* _footer;
	RUITableView* _tableElement;

}

@property (nonatomic,readonly) NSArray * rows; 
@property (nonatomic,retain) UIView*<RUIHeader> headerView;                                       //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) RUITableViewHeaderFooterView * containerizedHeaderView;              //@synthesize containerizedHeaderView=_containerizedHeaderView - In the implementation block
@property (nonatomic,retain) UIView*<RemoteUITableFooter> footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) RUITableViewHeaderFooterView * containerizedFooterView;              //@synthesize containerizedFooterView=_containerizedFooterView - In the implementation block
@property (assign,nonatomic) double headerHeight;                                                 //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                                                 //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) BOOL drawTopSeparator; 
@property (nonatomic,retain) RUITableViewRow * showAllRow;                                        //@synthesize showAllRow=_showAllRow - In the implementation block
@property (nonatomic,retain) RUIElement * header;                                                 //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUISubHeaderElement * subHeader;                                     //@synthesize subHeader=_subHeader - In the implementation block
@property (nonatomic,retain) RUIDetailHeaderElement * detailHeader;                               //@synthesize detailHeader=_detailHeader - In the implementation block
@property (nonatomic,retain) RUIElement * footer;                                                 //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic,__weak) RUITableView * tableElement;                                  //@synthesize tableElement=_tableElement - In the implementation block
@property (assign,nonatomic) BOOL configured;                                                     //@synthesize configured=_configured - In the implementation block
-(UIView*<RemoteUITableFooter>)footerView;
-(RUIElement *)footer;
-(void)setHeaderView:(UIView*<RUIHeader>)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)setHeader:(RUIElement *)arg1 ;
-(void)setAttributes:(id)arg1 ;
-(double)footerHeight;
-(RUIElement *)header;
-(void)removeRowAtIndex:(unsigned long long)arg1 ;
-(NSArray *)rows;
-(void)setFooter:(RUIElement *)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(void)addRow:(id)arg1 ;
-(void)setFooterView:(UIView*<RemoteUITableFooter>)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(UIView*<RUIHeader>)headerView;
-(double)headerHeight;
-(void)setImageSize:(CGSize)arg1 ;
-(BOOL)configured;
-(void)setDrawTopSeparator:(BOOL)arg1 ;
-(void)setConfigured:(BOOL)arg1 ;
-(RUISubHeaderElement *)subHeader;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(id)staticValues;
-(id)staticFunctions;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(RUITableView *)tableElement;
-(void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(id)subElementWithID:(id)arg1 ;
-(id)subElementsWithName:(id)arg1 ;
-(void)setTableElement:(RUITableView *)arg1 ;
-(RUIDetailHeaderElement *)detailHeader;
-(void)setDetailHeader:(RUIDetailHeaderElement *)arg1 ;
-(void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)hasCustomHeader;
-(BOOL)hasCustomFooter;
-(RUITableViewHeaderFooterView *)containerizedHeaderView;
-(RUITableViewHeaderFooterView *)containerizedFooterView;
-(RUITableViewRow *)showAllRow;
-(void)tappedShowAllRowWithTable:(id)arg1 ;
-(BOOL)hasValueForDrawsTopSeparator;
-(BOOL)drawTopSeparator;
-(Class)_customHeaderClass;
-(Class)_customFooterClass;
-(void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(id)colorFromAttributeString:(id)arg1 ;
-(void)setContainerizedHeaderView:(RUITableViewHeaderFooterView *)arg1 ;
-(void)setContainerizedFooterView:(RUITableViewHeaderFooterView *)arg1 ;
-(void)setShowAllRow:(RUITableViewRow *)arg1 ;
@end

