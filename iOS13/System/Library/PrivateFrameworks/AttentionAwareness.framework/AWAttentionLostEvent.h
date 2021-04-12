/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)validateMask;
-(void)updateWithConfig:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 attentionLostTimeout:(double)arg3 ;
-(double)attentionLostTimeout;
-(id)associatedObject;
@end

