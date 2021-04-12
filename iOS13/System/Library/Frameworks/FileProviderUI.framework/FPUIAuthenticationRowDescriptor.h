/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <FileProviderUI/FileProviderUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FPUIAuthenticationRowDescriptor : NSObject <NSCopying> {

	double _rowHeight;
	double _shouldHighlight;
	/*^block*/id _selectionHandler;
	/*^block*/id _accessoryButtonTapHandler;
	Class _cellClass;
	NSString* _cellReuseIdentifier;
	/*^block*/id _cellCustomizationHandler;
	/*^block*/id _cellWillDisplayHandler;
	long long _cellSelectionStyle;

}

@property (assign,nonatomic) double rowHeight;                          //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) double shouldHighlight;                    //@synthesize shouldHighlight=_shouldHighlight - In the implementation block
@property (nonatomic,copy) id selectionHandler;                         //@synthesize selectionHandler=_selectionHandler - In the implementation block
@property (nonatomic,copy) id accessoryButtonTapHandler;                //@synthesize accessoryButtonTapHandler=_accessoryButtonTapHandler - In the implementation block
@property (nonatomic,copy) Class cellClass;                             //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,copy) NSString * cellReuseIdentifier;              //@synthesize cellReuseIdentifier=_cellReuseIdentifier - In the implementation block
@property (nonatomic,copy) id cellCustomizationHandler;                 //@synthesize cellCustomizationHandler=_cellCustomizationHandler - In the implementation block
@property (nonatomic,copy) id cellWillDisplayHandler;                   //@synthesize cellWillDisplayHandler=_cellWillDisplayHandler - In the implementation block
@property (assign,nonatomic) long long cellSelectionStyle;              //@synthesize cellSelectionStyle=_cellSelectionStyle - In the implementation block
+(Class)defaultCellClass;
+(id)defaultCellReuseIdentifier;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rowHeight;
-(void)setRowHeight:(double)arg1 ;
-(NSString *)cellReuseIdentifier;
-(void)setCellReuseIdentifier:(NSString *)arg1 ;
-(Class)cellClass;
-(double)shouldHighlight;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(id)cellWillDisplayHandler;
-(void)setCellWillDisplayHandler:(id)arg1 ;
-(void)setCellClass:(Class)arg1 ;
-(void)setCellCustomizationHandler:(id)arg1 ;
-(void)setCellSelectionStyle:(long long)arg1 ;
-(void)setShouldHighlight:(double)arg1 ;
-(void)setAccessoryButtonTapHandler:(id)arg1 ;
-(id)accessoryButtonTapHandler;
-(id)cellCustomizationHandler;
-(long long)cellSelectionStyle;
@end

