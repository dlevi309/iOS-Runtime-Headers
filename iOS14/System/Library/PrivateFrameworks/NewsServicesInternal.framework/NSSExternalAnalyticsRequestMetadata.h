/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NTPBSession;

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding> {

	int _eventType;
	NSString* _eventIdentifier;
	NSString* _externalAnalyticsIdentifier;
	NTPBSession* _session;
	NSString* _contentViewedIdentifier;
	NSString* _publisherIdentifier;

}

@property (nonatomic,copy,readonly) NSString * eventIdentifier;                          //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalAnalyticsIdentifier;              //@synthesize externalAnalyticsIdentifier=_externalAnalyticsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NTPBSession * session;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentViewedIdentifier;                  //@synthesize contentViewedIdentifier=_contentViewedIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * publisherIdentifier;                      //@synthesize publisherIdentifier=_publisherIdentifier - In the implementation block
@property (nonatomic,readonly) int eventType;                                            //@synthesize eventType=_eventType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)eventIdentifier;
-(int)eventType;
-(void)encodeWithCoder:(id)arg1 ;
-(NTPBSession *)session;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)publisherIdentifier;
-(id)initWithSession:(id)arg1 eventIdentifier:(id)arg2 externalAnalyticsIdentifier:(id)arg3 contentViewedIdentifier:(id)arg4 publisherIdentifier:(id)arg5 eventType:(int)arg6 ;
-(NSString *)externalAnalyticsIdentifier;
-(NSString *)contentViewedIdentifier;
@end

