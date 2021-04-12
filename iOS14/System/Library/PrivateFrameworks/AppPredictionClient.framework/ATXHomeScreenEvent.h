/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSString, NSArray, ATXHomeScreenEventMetadata, NSDate;

@interface ATXHomeScreenEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper> {

	double _absoluteDate;
	NSString* _eventTypeString;
	NSString* _reason;
	NSString* _blendingCacheId;
	NSString* _stackId;
	NSString* _widgetBundleId;
	NSString* _widgetKind;
	NSString* _appBundleId;
	unsigned long long _widgetSize;
	unsigned long long _stackKind;
	unsigned long long _stackLocation;
	NSString* _intentDescription;
	NSString* _widgetUniqueId;
	NSArray* _suggestionIds;
	ATXHomeScreenEventMetadata* _metadata;

}

@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * eventTypeString;                         //@synthesize eventTypeString=_eventTypeString - In the implementation block
@property (nonatomic,retain) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * blendingCacheId;                         //@synthesize blendingCacheId=_blendingCacheId - In the implementation block
@property (nonatomic,retain) NSString * stackId;                                 //@synthesize stackId=_stackId - In the implementation block
@property (nonatomic,retain) NSString * widgetBundleId;                          //@synthesize widgetBundleId=_widgetBundleId - In the implementation block
@property (nonatomic,retain) NSString * widgetKind;                              //@synthesize widgetKind=_widgetKind - In the implementation block
@property (nonatomic,retain) NSString * appBundleId;                             //@synthesize appBundleId=_appBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long widgetSize;                      //@synthesize widgetSize=_widgetSize - In the implementation block
@property (assign,nonatomic) unsigned long long stackKind;                       //@synthesize stackKind=_stackKind - In the implementation block
@property (assign,nonatomic) unsigned long long stackLocation;                   //@synthesize stackLocation=_stackLocation - In the implementation block
@property (nonatomic,retain) NSString * intentDescription;                       //@synthesize intentDescription=_intentDescription - In the implementation block
@property (nonatomic,retain) NSString * widgetUniqueId;                          //@synthesize widgetUniqueId=_widgetUniqueId - In the implementation block
@property (nonatomic,retain) NSArray * suggestionIds;                            //@synthesize suggestionIds=_suggestionIds - In the implementation block
@property (nonatomic,retain) ATXHomeScreenEventMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventForPageShownWithIndex:(unsigned long long)arg1 widgetsByStack:(id)arg2 blendingCacheIdentifier:(id)arg3 ;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(NSString *)intentDescription;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)proto;
-(NSString *)widgetKind;
-(void)setAppBundleId:(NSString *)arg1 ;
-(id)encodeAsProto;
-(NSString *)appBundleId;
-(void)setWidgetUniqueId:(NSString *)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMetadata:(ATXHomeScreenEventMetadata *)arg1 ;
-(unsigned long long)widgetSize;
-(NSString *)stackId;
-(NSString *)reason;
-(void)setWidgetKind:(NSString *)arg1 ;
-(NSString *)blendingCacheId;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setIntentDescription:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(ATXHomeScreenEventMetadata *)metadata;
-(void)setWidgetSize:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)widgetBundleId;
-(NSString *)widgetUniqueId;
-(unsigned long long)stackKind;
-(unsigned long long)stackLocation;
-(NSArray *)suggestionIds;
-(NSString *)eventTypeString;
-(void)setStackId:(NSString *)arg1 ;
-(void)setEventTypeString:(NSString *)arg1 ;
-(void)setBlendingCacheId:(NSString *)arg1 ;
-(void)setSuggestionIds:(NSArray *)arg1 ;
-(void)setWidgetBundleId:(NSString *)arg1 ;
-(void)setStackKind:(unsigned long long)arg1 ;
-(void)setStackLocation:(unsigned long long)arg1 ;
-(BOOL)isEqualToATXHomeScreenEvent:(id)arg1 ;
@end

