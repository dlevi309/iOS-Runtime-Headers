/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVisiblePercentageProviding.h>
#import <libobjc.A.dylib/SVVisiblePercentageReporting.h>

@class NSString;

@interface SVVisiblePercentageProvider : NSObject <SVVisiblePercentageProviding, SVVisiblePercentageReporting> {

	double _visiblePercentage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double visiblePercentage;              //@synthesize visiblePercentage=_visiblePercentage - In the implementation block
-(double)visiblePercentage;
-(void)setVisiblePercentage:(double)arg1 ;
-(double)visiblePercentageOfObject:(id)arg1 ;
-(id)initWithVisiblePercentage:(double)arg1 ;
@end

