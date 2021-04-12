/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWAttentionEvent : NSObject <NSSecureCoding> {

	unsigned long long _tagIndex;
	unsigned long long _eventMask;
	double _timestamp;
	id _tag;

}

@property (nonatomic,readonly) unsigned long long eventMask;              //@synthesize eventMask=_eventMask - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id tag;                                    //@synthesize tag=_tag - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)validateMask;
-(unsigned long long)eventMask;
-(unsigned long long)tagIndex;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 eventMask:(unsigned long long)arg3 ;
-(void)updateWithConfig:(id)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tag;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

