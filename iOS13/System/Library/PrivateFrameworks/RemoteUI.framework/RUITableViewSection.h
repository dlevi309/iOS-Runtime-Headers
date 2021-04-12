/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setAttributes:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(NSArray *)rows;
-(RUIElement *)header;
-(UIView*<RUIHeader>)headerView;
-(void)setHeaderView:(UIView*<RUIHeader>)arg1 ;
-(void)setHeader:(RUIElement *)arg1 ;
-(RUIElement *)footer;
-(void)setFooter:(RUIElement *)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(double)headerHeight;
-(double)footerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(UIView*<RemoteUITableFooter>)footerView;
-(void)setFooterView:(UIView*<RemoteUITableFooter>)arg1 ;
-(void)removeRowAtIndex:(unsigned long long)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(RUISubHeaderElement *)subHeader;
-(void)setSubHeader:(RUISubHeaderElement *)arg1 ;
-(id)staticValues;
-(id)staticFunctions;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(RUITableView *)tableElement;
-(id)subElementWithID:(id)arg1 ;
-(id)subElementsWithName:(id)arg1 ;
-(void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(void)addRow:(id)arg1 ;
-(void)setTableElement:(RUITableView *)arg1 ;
-(RUIDetailHeaderElement *)detailHeader;
-(void)setDetailHeader:(RUIDetailHeaderElement *)arg1 ;
-(void)insertRow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)configured;
-(void)setConfigured:(BOOL)arg1 ;
-(BOOL)hasCustomHeader;
-(BOOL)hasCustomFooter;
-(RUITableViewHeaderFooterView *)containerizedHeaderView;
-(RUITableViewHeaderFooterView *)containerizedFooterView;
-(RUITableViewRow *)showAllRow;
-(void)tappedShowAllRowWithTable:(id)arg1 ;
-(BOOL)hasValueForDrawsTopSeparator;
-(BOOL)drawTopSeparator;
-(void)headerView:(id)arg1 activatedLinkWithURL:(id)arg2 ;
-(void)setDrawTopSeparator:(BOOL)arg1 ;
-(Class)_customHeaderClass;
-(Class)_customFooterClass;
-(id)colorFromAttributeString:(id)arg1 ;
-(void)setContainerizedHeaderView:(RUITableViewHeaderFooterView *)arg1 ;
-(void)setContainerizedFooterView:(RUITableViewHeaderFooterView *)arg1 ;
-(void)setShowAllRow:(RUITableViewRow *)arg1 ;
@end

