/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)videoCompressionProperties;
-(double)clipDuration;
-(void)setClipDuration:(double)arg1 ;
-(void)setVideoCompressionProperties:(NSDictionary *)arg1 ;
@end

