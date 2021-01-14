/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface PAEKeyerHistogram : NSObject <NSCoding> {

	ColorHisto* _histogram;

}
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(ColorHisto*)getHistogram;
-(void)setHistogramArray:(id)arg1 ;
@end

