/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <NewsServicesInternal/NewsServicesInternal-Structs.h>
#import <libobjc.A.dylib/NSSExternalAnalyticsEvent.h>
@class NSDictionary;


@protocol NSSExternalAnalyticsEvent <NFCopying>
@property (nonatomic,copy,readonly) NSDictionary * requestQueryParameters; 
@required
-(NSDictionary *)requestQueryParameters;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1;

@end


@class NSDictionary, NTPBSession;

@interface NSSExternalAnalyticsEvent : NSObject <NSSExternalAnalyticsEvent> {

	NSDictionary* _requestQueryParameters;
	NTPBSession* _session;

}

@property (nonatomic,copy,readonly) NTPBSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requestQueryParameters;              //@synthesize requestQueryParameters=_requestQueryParameters - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NTPBSession *)session;
-(id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2 ;
-(NSDictionary *)requestQueryParameters;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1 ;
@end

