/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}
-(void)startAnimating;
-(void)stopAnimating;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)dealloc;
@end

