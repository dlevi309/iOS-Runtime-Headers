/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding> {

	double _attentionLostTimeout;
	id _associatedObject;

}

@property (nonatomic,readonly) double attentionLostTimeout;              //@synthesize attentionLostTimeout=_attentionLostTimeout - In the implementation block
@property (nonatomic,readonly) id associatedObject;                      //@synthesize associatedObject=_associatedObject - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)validateMask;
-(void)updateWithConfig:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)associatedObject;
-(double)attentionLostTimeout;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 attentionLostTimeout:(double)arg3 ;
@end

