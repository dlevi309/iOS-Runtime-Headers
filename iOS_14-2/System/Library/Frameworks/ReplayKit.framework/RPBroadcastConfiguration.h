/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface RPBroadcastConfiguration : NSObject <NSCoding, NSSecureCoding> {

	double _clipDuration;
	NSDictionary* _videoCompressionProperties;

}

@property (assign,nonatomic) double clipDuration;                                    //@synthesize clipDuration=_clipDuration - In the implementation block
@property (nonatomic,retain) NSDictionary * videoCompressionProperties;              //@synthesize videoCompressionProperties=_videoCompressionProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)videoCompressionProperties;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)clipDuration;
-(void)setClipDuration:(double)arg1 ;
-(void)setVideoCompressionProperties:(NSDictionary *)arg1 ;
@end

