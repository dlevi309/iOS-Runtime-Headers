/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExpanded:(BOOL)arg1 ;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(NSString *)footer;
-(id)sectionIdentifier;
-(void)setSectionIdentifier:(id)arg1 ;
-(void)setHeader:(NSString *)arg1 ;
-(id)init;
-(unsigned long long)numberOfItems;
-(double)footerHeight;
-(NSString *)header;
-(void)setFooter:(NSString *)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(NSMutableArray *)items;
-(Class)footerClass;
-(void)setHeaderHeight:(double)arg1 ;
-(double)headerHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)headerClass;
-(void)setHeaderClass:(Class)arg1 ;
-(void)setFooterClass:(Class)arg1 ;
@end

