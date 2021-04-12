/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedProvider;
+(id)backgroundImageCache;
+(id)_color:(id)arg1 darkenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
-(id)init;
-(void)cancelRequest:(long long)arg1 ;
-(NSMutableDictionary *)pendingRequests;
-(long long)requestPayloadForState:(id)arg1 requestOptions:(unsigned long long)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_lookupQueue_enqueueRequest:(id)arg1 ;
-(void)_renderRequestId:(long long)arg1 ;
-(void)_scheduleRequestId:(long long)arg1 ;
-(void)_lookupQueue_removeRequestId:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)drawingQueue;
-(id)_lookupQueue_activeRequestForId:(long long)arg1 ;
-(id)_renderBackgroundImageWithState:(id)arg1 ;
-(id)_renderTextImageWithState:(id)arg1 ;
-(id)_renderTravelTimeImageWithState:(id)arg1 ;
-(EKDayOccurrenceStringGenerator *)stringGenerator;
-(id)_renderColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(id)_renderLightColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(id)_renderDarkColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(id)_renderLightSelectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(id)_renderLightUnselectedColorBlockImageWithState:(id)arg1 colorBarStyle:(long long)arg2 ;
-(id)_renderColorBlockImageWithState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 stripeColor:(id)arg4 stripedImageAlpha:(double)arg5 colorBarStyle:(long long)arg6 ;
-(id)_renderBackgroundImageForState:(id)arg1 barColor:(id)arg2 backgroundColor:(id)arg3 colorBarStyle:(long long)arg4 ;
-(NSObject*<OS_dispatch_queue>)lookupQueue;
@end

