/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, EKDayOccurrenceStringGenerator;

@interface EKDayOccurrencePayloadProvider : NSObject {

	long long _nextRequestId;
	NSObject*<OS_dispatch_queue> _lookupQueue;
	NSObject*<OS_dispatch_queue> _drawingQueue;
	NSMutableDictionary* _pendingRequests;
	EKDayOccurrenceStringGenerator* _stringGenerator;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> lookupQueue;                      //@synthesize lookupQueue=_lookupQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> drawingQueue;                     //@synthesize drawingQueue=_drawingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingRequests;                         //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) EKDayOccurrenceStringGenerator * stringGenerator;              //@synthesize stringGenerator=_stringGenerator - In the implementation block
+(id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(id)backgroundImageCache;
+(id)sharedProvider;
-(id)_renderBackgroundImageForState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 colorBarStyle:(long long)arg4 ;
-(id)_renderTextImageWithState:(id)arg1 ;
-(id)_renderTravelTimeImageWithState:(id)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(id)init;
-(void)_scheduleRequestId:(long long)arg1 ;
-(id)_lookupQueue_activeRequestForId:(long long)arg1 ;
-(id)_renderColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(void)_lookupQueue_enqueueRequest:(id)arg1 ;
-(id)_renderLightColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(void)_renderRequestId:(long long)arg1 ;
-(id)_renderDarkColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(EKDayOccurrenceStringGenerator *)stringGenerator;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
-(id)_renderLightSelectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)drawingQueue;
-(id)_renderBackgroundImageWithState:(id)arg1 ;
-(void)_lookupQueue_removeRequestId:(long long)arg1 ;
-(id)_renderColorBlockImageWithState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 stripeColor:(id)arg4 stripedImageAlpha:(double)arg5 colorBarStyle:(long long)arg6 ;
-(long long)requestPayloadForState:(id)arg1 requestOptions:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_renderLightUnselectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(void)cancelRequest:(long long)arg1 ;
@end

