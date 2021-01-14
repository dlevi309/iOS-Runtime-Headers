/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NTPBSession *)session;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)requestQueryParameters;
-(id)requestMetadataWithExternalAnalyticsIdentifier:(id)arg1 ;
-(id)initWithSession:(id)arg1 requestQueryParameters:(id)arg2 ;
@end

