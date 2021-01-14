/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>
#import <libobjc.A.dylib/GEOMapServiceFeedbackReportTicket.h>

@protocol GEOMapItem;
@class GEOMapServiceTraits, NSData, GEORPFeedbackRequestParameters, GEORPFeedbackRequest, GEORPUserCredentials, NSString;

@interface _GEORPFeedbackTicket : GEOAbstractTicket <GEOMapServiceFeedbackReportTicket> {

	NSData* _resubmissionData;
	GEORPFeedbackRequestParameters* _feedbackRequestParameters;
	id<GEOMapItem> _place;
	GEORPFeedbackRequest* _feedbackRequest;
	GEORPUserCredentials* _userCredentials;
	NSData* _pushToken;
	NSString* _emailAddress;
	BOOL _started;

}

@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFeedbackRequestParameters:(id)arg1 placeForProblemContext:(id)arg2 userCredentials:(id)arg3 pushToken:(id)arg4 allowContactBackAtEmailAddress:(id)arg5 traits:(id)arg6 ;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2 ;
-(id)initWithFeedbackRequest:(id)arg1 traits:(id)arg2 ;
-(id)initWithFeedbackRequestData:(id)arg1 traits:(id)arg2 ;
-(void)cancel;
-(SCD_Struct_GE91)dataRequestKind;
@end

