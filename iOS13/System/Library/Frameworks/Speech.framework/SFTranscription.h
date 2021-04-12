/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/

#import <Speech/Speech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {

	NSString* _formattedString;
	NSArray* _segments;
	double _speakingRate;
	double _averagePauseDuration;

}

@property (nonatomic,copy,readonly) NSString * formattedString;              //@synthesize formattedString=_formattedString - In the implementation block
@property (nonatomic,copy,readonly) NSArray * segments;                      //@synthesize segments=_segments - In the implementation block
@property (nonatomic,readonly) double speakingRate;                          //@synthesize speakingRate=_speakingRate - In the implementation block
@property (nonatomic,readonly) double averagePauseDuration;                  //@synthesize averagePauseDuration=_averagePauseDuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)segments;
-(NSString *)formattedString;
-(double)speakingRate;
-(id)_initWithSegments:(id)arg1 formattedString:(id)arg2 speakingRate:(double)arg3 averagePauseDuration:(double)arg4 ;
-(double)averagePauseDuration;
@end

