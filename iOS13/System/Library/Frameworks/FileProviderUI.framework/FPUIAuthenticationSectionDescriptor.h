/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/


@class NSString;

@interface FPUIAuthenticationSectionDescriptor : NSObject {

	BOOL _shouldHighlightRows;
	BOOL _active;
	double _headerHeight;
	double _footerHeight;
	NSString* _headerTitle;
	Class _headerViewClass;
	NSString* _headerViewReuseIdentifier;
	/*^block*/id _headerViewCustomizationBlock;
	NSString* _footerTitle;
	Class _footerViewClass;
	NSString* _footerViewReuseIdentifier;
	/*^block*/id _footerViewCustomizationBlock;
	Class _rowCellClass;
	NSString* _rowCellReuseIdentifier;

}

@property (assign,nonatomic) double headerHeight;                             //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                             //@synthesize footerHeight=_footerHeight - In the implementation block
@property (assign,nonatomic) BOOL shouldHighlightRows;                        //@synthesize shouldHighlightRows=_shouldHighlightRows - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                            //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) Class headerViewClass;                             //@synthesize headerViewClass=_headerViewClass - In the implementation block
@property (nonatomic,copy) NSString * headerViewReuseIdentifier;              //@synthesize headerViewReuseIdentifier=_headerViewReuseIdentifier - In the implementation block
@property (nonatomic,copy) id headerViewCustomizationBlock;                   //@synthesize headerViewCustomizationBlock=_headerViewCustomizationBlock - In the implementation block
@property (nonatomic,copy) NSString * footerTitle;                            //@synthesize footerTitle=_footerTitle - In the implementation block
@property (nonatomic,copy) Class footerViewClass;                             //@synthesize footerViewClass=_footerViewClass - In the implementation block
@property (nonatomic,copy) NSString * footerViewReuseIdentifier;              //@synthesize footerViewReuseIdentifier=_footerViewReuseIdentifier - In the implementation block
@property (nonatomic,copy) id footerViewCustomizationBlock;                   //@synthesize footerViewCustomizationBlock=_footerViewCustomizationBlock - In the implementation block
@property (nonatomic,copy) Class rowCellClass;                                //@synthesize rowCellClass=_rowCellClass - In the implementation block
@property (nonatomic,copy) NSString * rowCellReuseIdentifier;                 //@synthesize rowCellReuseIdentifier=_rowCellReuseIdentifier - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                     //@synthesize active=_active - In the implementation block
-(id)init;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(double)headerHeight;
-(double)footerHeight;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(NSString *)footerTitle;
-(void)setFooterTitle:(NSString *)arg1 ;
-(Class)footerViewClass;
-(Class)headerViewClass;
-(BOOL)shouldHighlightRows;
-(void)setShouldHighlightRows:(BOOL)arg1 ;
-(void)setHeaderViewClass:(Class)arg1 ;
-(NSString *)headerViewReuseIdentifier;
-(void)setHeaderViewReuseIdentifier:(NSString *)arg1 ;
-(id)headerViewCustomizationBlock;
-(void)setHeaderViewCustomizationBlock:(id)arg1 ;
-(void)setFooterViewClass:(Class)arg1 ;
-(NSString *)footerViewReuseIdentifier;
-(void)setFooterViewReuseIdentifier:(NSString *)arg1 ;
-(id)footerViewCustomizationBlock;
-(void)setFooterViewCustomizationBlock:(id)arg1 ;
-(Class)rowCellClass;
-(void)setRowCellClass:(Class)arg1 ;
-(NSString *)rowCellReuseIdentifier;
-(void)setRowCellReuseIdentifier:(NSString *)arg1 ;
@end

