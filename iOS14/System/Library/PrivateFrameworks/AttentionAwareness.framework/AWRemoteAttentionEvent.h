/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)validateMask;
-(long long)usage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 tagIndex:(unsigned long long)arg2 remoteMetadata:(AWRemoteMetadata*)arg3 ;
-(id)description;
-(long long)usagePage;
-(id)initWithCoder:(id)arg1 ;
@end

