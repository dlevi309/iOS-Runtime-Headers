/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface AVCAudioPowerSpectrumChannel : NSObject <NSSecureCoding> {

	NSMutableArray* _bins;

}

@property (nonatomic,readonly) NSArray * bins;              //@synthesize bins=_bins - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)bins;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)applyChannelBins:(VCAudioPowerSpectrumEntry*)arg1 binCount:(unsigned)arg2 ;
@end

