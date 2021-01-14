/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString;

@interface __NSFontExtraData : NSObject {

	double _ascender;
	double _lineHeight;
	struct {
		unsigned _isSystemFont : 1;
		unsigned _isIBScaledFont : 1;
	}  _fFlags;
	NSString* _textStyleForScaling;
	double _pointSizeForScaling;
	double _maximumPointSizeAfterScaling;

}
-(BOOL)isEqualToExtraData:(id)arg1 ;
-(unsigned long long)hash;
-(void)dealloc;
@end

