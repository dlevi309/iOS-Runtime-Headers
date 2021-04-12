/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSArray *)segments;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)formattedString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)speakingRate;
-(id)_initWithSegments:(id)arg1 formattedString:(id)arg2 speakingRate:(double)arg3 averagePauseDuration:(double)arg4 ;
-(double)averagePauseDuration;
@end

