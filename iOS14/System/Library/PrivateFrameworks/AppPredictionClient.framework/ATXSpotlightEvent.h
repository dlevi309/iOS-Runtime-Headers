/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSString, NSArray, ATXSpotlightEventMetadata, NSDate;

@interface ATXSpotlightEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	double _absoluteDate;
	int _eventType;
	NSString* _appConsumerSubType;
	NSString* _actionConsumerSubType;
	NSString* _appBlendingCacheId;
	NSString* _actionBlendingCacheId;
	NSArray* _appSuggestionIds;
	NSArray* _actionSuggestionIds;
	ATXSpotlightEventMetadata* _metadata;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) int eventType;                                     //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,retain) NSString * appConsumerSubType;                     //@synthesize appConsumerSubType=_appConsumerSubType - In the implementation block
@property (nonatomic,retain) NSString * actionConsumerSubType;                  //@synthesize actionConsumerSubType=_actionConsumerSubType - In the implementation block
@property (nonatomic,retain) NSString * appBlendingCacheId;                     //@synthesize appBlendingCacheId=_appBlendingCacheId - In the implementation block
@property (nonatomic,retain) NSString * actionBlendingCacheId;                  //@synthesize actionBlendingCacheId=_actionBlendingCacheId - In the implementation block
@property (nonatomic,retain) NSArray * appSuggestionIds;                        //@synthesize appSuggestionIds=_appSuggestionIds - In the implementation block
@property (nonatomic,retain) NSArray * actionSuggestionIds;                     //@synthesize actionSuggestionIds=_actionSuggestionIds - In the implementation block
@property (nonatomic,retain) ATXSpotlightEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)viewAppearedEventWithSFFeedback:(id)arg1 ;
+(id)viewDisappearedEventWithDidSearch:(BOOL)arg1 ;
+(id)suggestionsAppearedEventWithAppSuggestionIds:(id)arg1 actionSuggestionIds:(id)arg2 appBlendingCacheId:(id)arg3 actionBlendingCacheId:(id)arg4 ;
+(id)appSuggestionTappedEventWithSuggestionId:(id)arg1 appBlendingCacheId:(id)arg2 currentQuery:(id)arg3 ;
+(id)actionSuggestionTappedEventWithSuggestionId:(id)arg1 actionBlendingCacheId:(id)arg2 currentQuery:(id)arg3 ;
+(id)searchResultTappedWithEngagedBundleId:(id)arg1 searchedActionType:(unsigned long long)arg2 ;
+(id)actionSuggestionDismissedEventWithSuggestionId:(id)arg1 actionBlendingCacheId:(id)arg2 ;
+(id)actionSuggestionContextMenuDismissOnceEventWithSuggestionId:(id)arg1 actionBlendingCacheId:(id)arg2 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)setEventType:(int)arg1 ;
-(int)eventType;
-(id)proto;
-(id)encodeAsProto;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMetadata:(ATXSpotlightEventMetadata *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(ATXSpotlightEventMetadata *)metadata;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)appBlendingCacheId;
-(NSString *)actionBlendingCacheId;
-(NSArray *)appSuggestionIds;
-(NSArray *)actionSuggestionIds;
-(NSString *)appConsumerSubType;
-(NSString *)actionConsumerSubType;
-(void)setAppConsumerSubType:(NSString *)arg1 ;
-(void)setActionConsumerSubType:(NSString *)arg1 ;
-(void)setAppBlendingCacheId:(NSString *)arg1 ;
-(void)setActionBlendingCacheId:(NSString *)arg1 ;
-(void)setAppSuggestionIds:(NSArray *)arg1 ;
-(void)setActionSuggestionIds:(NSArray *)arg1 ;
-(id)initWithAbsoluteDate:(double)arg1 eventType:(int)arg2 appConsumerSubType:(id)arg3 actionConsumerSubType:(id)arg4 appBlendingCacheId:(id)arg5 actionBlendingCacheId:(id)arg6 appSuggestionIds:(id)arg7 actionSuggestionIds:(id)arg8 metadata:(id)arg9 ;
-(BOOL)isEqualToATXSpotlightEvent:(id)arg1 ;
-(id)initWithDate:(id)arg1 eventType:(int)arg2 appConsumerSubType:(id)arg3 actionConsumerSubType:(id)arg4 appBlendingCacheId:(id)arg5 actionBlendingCacheId:(id)arg6 appSuggestionIds:(id)arg7 actionSuggestionIds:(id)arg8 metadata:(id)arg9 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
@end

