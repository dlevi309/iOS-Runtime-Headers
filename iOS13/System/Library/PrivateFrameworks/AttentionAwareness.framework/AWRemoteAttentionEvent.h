/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/

#import <AttentionAwareness/AttentionAwareness-Structs.h>
#import <AttentionAwareness/AWAttentionEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AWRemoteAttentionEvent : AWAttentionEvent <NSSecureCoding> {

	long long _usagePage;
	long long _usage;

}

@property (nonatomic,readonly) long long usagePage;              //@synthesize usagePage=_usagePage - In the implementation block
@property (nonatomic,readonly) long long usage;                  //@synthesize usage=_usage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)usage;
-(long long)usagePage;
-(void)validateMask;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(AWRemoteMetadata*)arg3 ;
@end

