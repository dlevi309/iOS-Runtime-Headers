/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVCollectionViewFlowLayout.h>

@interface _TVGridViewFlowLayout : _TVCollectionViewFlowLayout {

	TVCellMetrics _cellMetrics;

}

@property (assign,nonatomic) TVCellMetrics cellMetrics;              //@synthesize cellMetrics=_cellMetrics - In the implementation block
-(id)init;
-(TVCellMetrics)cellMetrics;
-(void)setCellMetrics:(TVCellMetrics)arg1 ;
-(double)expectedLineSpacing;
@end

