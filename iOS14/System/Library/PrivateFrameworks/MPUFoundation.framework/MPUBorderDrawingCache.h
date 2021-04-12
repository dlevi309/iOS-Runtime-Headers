/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@class MPUBorderView, NSCache;

@interface MPUBorderDrawingCache : NSObject {

	MPUBorderView* _borderView;
	NSCache* _images;
	double _displayScale;

}

@property (assign,nonatomic) double displayScale;              //@synthesize displayScale=_displayScale - In the implementation block
-(void)_invalidate;
-(void)setDisplayScale:(double)arg1 ;
-(double)displayScale;
-(id)init;
-(id)_borderView;
-(void)_applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)dealloc;
-(id)imageForBorderConfiguration:(id)arg1 ;
@end

