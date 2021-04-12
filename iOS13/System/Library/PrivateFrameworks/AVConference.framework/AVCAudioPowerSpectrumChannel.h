/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)bins;
-(void)applyChannelBins:(VCAudioPowerSpectrumEntry*)arg1 binCount:(unsigned)arg2 ;
@end

