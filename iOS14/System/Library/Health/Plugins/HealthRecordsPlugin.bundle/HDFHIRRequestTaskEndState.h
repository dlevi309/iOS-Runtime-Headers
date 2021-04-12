/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface HDFHIRRequestTaskEndState : NSObject <NSCopying> {

	NSURL* _requestedURL;
	long long _responseStatusCode;
	double _requestDuration;

}

@property (nonatomic,copy,readonly) NSURL * requestedURL;                 //@synthesize requestedURL=_requestedURL - In the implementation block
@property (nonatomic,readonly) long long responseStatusCode;              //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,readonly) double requestDuration;                    //@synthesize requestDuration=_requestDuration - In the implementation block
+(id)unitTestSuccessState;
-(long long)responseStatusCode;
-(id)description;
-(double)requestDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestedURL:(id)arg1 responseStatusCode:(long long)arg2 requestDuration:(double)arg3 ;
-(NSURL *)requestedURL;
@end

