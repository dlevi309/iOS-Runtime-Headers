/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUITracklistColumn : NSObject <NSCopying> {

	long long _columnIdentifier;
	long long _contentAlignment;
	long long _headerAlignment;
	double _maximumWidthFraction;
	double _preferredWidth;
	BOOL _showsPreviewControl;
	BOOL _sizesToFit;
	double _width;

}

@property (assign,nonatomic) double width;                             //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long columnIdentifier;               //@synthesize columnIdentifier=_columnIdentifier - In the implementation block
@property (assign,nonatomic) BOOL showsPreviewControl;                 //@synthesize showsPreviewControl=_showsPreviewControl - In the implementation block
@property (assign,nonatomic) BOOL sizesToFit;                          //@synthesize sizesToFit=_sizesToFit - In the implementation block
@property (assign,nonatomic) long long contentAlignment;               //@synthesize contentAlignment=_contentAlignment - In the implementation block
@property (assign,nonatomic) long long headerAlignment;                //@synthesize headerAlignment=_headerAlignment - In the implementation block
@property (assign,nonatomic) double maximumWidthFraction;              //@synthesize maximumWidthFraction=_maximumWidthFraction - In the implementation block
@property (assign,nonatomic) double preferredWidth;                    //@synthesize preferredWidth=_preferredWidth - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(double)preferredWidth;
-(long long)contentAlignment;
-(void)setContentAlignment:(long long)arg1 ;
-(void)setPreferredWidth:(double)arg1 ;
-(void)setHeaderAlignment:(long long)arg1 ;
-(long long)columnIdentifier;
-(void)setColumnIdentifier:(long long)arg1 ;
-(void)setShowsPreviewControl:(BOOL)arg1 ;
-(void)setSizesToFit:(BOOL)arg1 ;
-(BOOL)sizesToFit;
-(double)maximumWidthFraction;
-(void)setMaximumWidthFraction:(double)arg1 ;
-(void)setPreferredWidthForAttributedStrings:(id)arg1 ;
-(long long)headerAlignment;
-(BOOL)showsPreviewControl;
@end

