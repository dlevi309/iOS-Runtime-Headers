/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
@end

