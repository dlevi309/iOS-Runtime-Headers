/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding> {

	NSArray* _bins;

}

@property (nonatomic,retain) NSArray * bins;              //@synthesize bins=_bins - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithOspreySausage:(id)arg1 choices:(id)arg2 locale:(id)arg3 ;
-(NSArray *)bins;
-(id)initWithCoder:(id)arg1 ;
-(void)setBins:(NSArray *)arg1 ;
-(id)initWithRecognition:(id)arg1 wordConfidenceThreshold:(long long)arg2 ;
@end

