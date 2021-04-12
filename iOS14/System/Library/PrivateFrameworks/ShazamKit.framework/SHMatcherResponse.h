/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SHMatch;

@interface SHMatcherResponse : NSObject <NSSecureCoding> {

	double _recordingIntermission;
	double _retrySeconds;
	SHMatch* _match;

}

@property (nonatomic,readonly) double recordingIntermission;              //@synthesize recordingIntermission=_recordingIntermission - In the implementation block
@property (nonatomic,readonly) double retrySeconds;                       //@synthesize retrySeconds=_retrySeconds - In the implementation block
@property (nonatomic,readonly) SHMatch * match;                           //@synthesize match=_match - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)errorResponse;
+(id)noMatchWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 ;
-(SHMatch *)match;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3 ;
-(double)recordingIntermission;
-(double)retrySeconds;
@end

