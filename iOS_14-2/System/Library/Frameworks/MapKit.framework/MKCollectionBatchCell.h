/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface MKCollectionBatchCell : UICollectionViewCell {

	UIActivityIndicatorView* _loadingView;

}
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setupSubviews;
-(void)setupConstraitns;
-(void)startedLoadingBatch;
-(void)finishedLoadingBatch;
@end

