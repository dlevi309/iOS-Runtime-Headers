/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUIHorizontalLockupLayout : NSObject {

	NSMutableArray* _columns;
	double _imageMarginRight;
	UIEdgeInsets _metadataColumnEdgeInsets;
	double _metadataColumnMinHeight;
	double _tallestNonMetadataColumnHeight;

}

@property (nonatomic,readonly) NSArray * columns;                                  //@synthesize columns=_columns - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets metadataColumnEdgeInsets;              //@synthesize metadataColumnEdgeInsets=_metadataColumnEdgeInsets - In the implementation block
+(id)fontForButtonViewElement:(id)arg1 context:(id)arg2 ;
+(id)fontForLabelViewElement:(id)arg1 context:(id)arg2 ;
+(id)fontForOrdinalViewElement:(id)arg1 context:(id)arg2 ;
-(NSArray *)columns;
-(CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(double)topPaddingForViewElement:(id)arg1 ;
-(double)bottomPaddingForViewElement:(id)arg1 ;
-(id)initWithLockup:(id)arg1 context:(id)arg2 ;
-(void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2 ;
-(double)columnSpacingForColumnIdentifier:(long long)arg1 ;
-(UIEdgeInsets)metadataColumnEdgeInsets;
-(CGSize)_sizeForRightAlignedColumn:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(double)_heightForMetadataColumn:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end

