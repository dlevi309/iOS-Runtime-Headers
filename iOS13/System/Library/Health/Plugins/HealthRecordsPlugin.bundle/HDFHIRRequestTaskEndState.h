/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)responseStatusCode;
-(double)requestDuration;
-(id)initWithRequestedURL:(id)arg1 responseStatusCode:(long long)arg2 requestDuration:(double)arg3 ;
-(NSURL *)requestedURL;
@end

