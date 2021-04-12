/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VCCaptionsTranscriptionSegment : NSObject <NSCopying, NSCoding, NSSecureCoding> {

	NSString* _text;
	NSRange _range;
	unsigned _confidence;

}

@property (nonatomic,readonly) unsigned confidence;              //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) NSString * text;                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSRange range;                    //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)confidence;
-(NSRange)range;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)text;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithConfidence:(unsigned)arg1 text:(id)arg2 range:(NSRange)arg3 ;
@end

