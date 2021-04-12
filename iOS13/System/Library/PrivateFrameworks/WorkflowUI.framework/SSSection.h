/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface SSSection : NSObject <NSCopying> {

	BOOL _expanded;
	NSMutableArray* _items;
	id _sectionIdentifier;
	NSString* _header;
	NSString* _footer;
	Class _headerClass;
	Class _footerClass;
	double _headerHeight;
	double _footerHeight;

}

@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) NSMutableArray * items;                     //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) id sectionIdentifier;                         //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * header;                              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSString * footer;                              //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic,__weak) Class headerClass;                     //@synthesize headerClass=_headerClass - In the implementation block
@property (assign,nonatomic,__weak) Class footerClass;                     //@synthesize footerClass=_footerClass - In the implementation block
@property (assign,nonatomic) double headerHeight;                          //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                          //@synthesize footerHeight=_footerHeight - In the implementation block
+(id)sectionWithItems:(id)arg1 ;
+(id)sectionWithItems:(id)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4 ;
+(id)sectionWithNumberOfItems:(unsigned long long)arg1 ;
+(id)sectionWithNumberOfItems:(unsigned long long)arg1 header:(id)arg2 footer:(id)arg3 identifier:(id)arg4 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)items;
-(NSString *)header;
-(unsigned long long)numberOfItems;
-(BOOL)isExpanded;
-(void)setHeader:(NSString *)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(void)setExpanded:(BOOL)arg1 ;
-(double)headerHeight;
-(double)footerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(id)sectionIdentifier;
-(void)setSectionIdentifier:(id)arg1 ;
-(Class)footerClass;
-(Class)headerClass;
-(void)setHeaderClass:(Class)arg1 ;
-(void)setFooterClass:(Class)arg1 ;
@end

