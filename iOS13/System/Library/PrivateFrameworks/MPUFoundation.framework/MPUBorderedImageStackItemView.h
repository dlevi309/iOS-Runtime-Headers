/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUImageStackItemView.h>

@class UIImageView, MPUBorderConfiguration, MPUBorderDrawingCache;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {

	UIImageView* _borderImageView;
	MPUBorderConfiguration* _borderConfiguration;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)_updateBorderImageView;
-(void)_borderDrawingCacheWasInvalidated:(id)arg1 ;
-(MPUBorderConfiguration *)borderConfiguration;
@end

