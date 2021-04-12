/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface PAEKeyerHistogram : NSObject <NSCoding> {

	ColorHisto* _histogram;

}
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(ColorHisto*)getHistogram;
-(void)setHistogramArray:(id)arg1 ;
@end

