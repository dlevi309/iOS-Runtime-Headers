/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


#import <TestFlightCore/TestFlightCore-Structs.h>
@interface TFImageFetcher : NSObject {

	double _displayedScreenScale;

}

@property (nonatomic,readonly) double displayedScreenScale;              //@synthesize displayedScreenScale=_displayedScreenScale - In the implementation block
-(id)init;
-(id)_urlStringForIconArtwork:(id)arg1 ofSize:(CGSize)arg2 fileFormat:(id)arg3 ;
-(double)displayedScreenScale;
-(void)fetchIconArtwork:(id)arg1 ofSize:(CGSize)arg2 intoView:(id)arg3 animated:(BOOL)arg4 ;
@end

