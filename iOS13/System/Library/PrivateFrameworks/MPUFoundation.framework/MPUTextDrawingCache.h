/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


#import <MPUFoundation/MPUFoundation-Structs.h>
@class NSCache, NSStringDrawingContext, MPUTextDrawingCacheKey, NSHashTable, NSOperationQueue, NSDictionary;

@interface MPUTextDrawingCache : NSObject {

	NSCache* _cache;
	NSStringDrawingContext* _reusableStringDrawingContext;
	MPUTextDrawingCacheKey* _reusableTextDrawingCacheKey;
	NSHashTable* _invalidationObservers;
	unsigned long long _invalidationNotificationCoalescingRequestsCount;
	BOOL _wasInvalidatedWithoutNotifyingObservers;
	NSOperationQueue* _preHeatingOperationQueue;
	BOOL _opaque;
	BOOL _usesImageCachingInsteadOfStringDrawingContextCaching;
	NSDictionary* _textAttributes;
	unsigned long long _maximumNumberOfLines;
	double _displayScale;
	/*^block*/id _attributedTextProvider;

}

@property (assign,setter=_setOpaque:,getter=_isOpaque,nonatomic) BOOL opaque;                                                                                                                                                      //@synthesize opaque=_opaque - In the implementation block
@property (assign,setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:,getter=_usesImageCachingInsteadOfStringDrawingContextCaching,nonatomic) BOOL usesImageCachingInsteadOfStringDrawingContextCaching;              //@synthesize usesImageCachingInsteadOfStringDrawingContextCaching=_usesImageCachingInsteadOfStringDrawingContextCaching - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;                                                                                                                                                                          //@synthesize textAttributes=_textAttributes - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfLines;                                                                                                                                                              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (assign,nonatomic) double displayScale;                                                                                                                                                                                  //@synthesize displayScale=_displayScale - In the implementation block
@property (nonatomic,copy) id attributedTextProvider;                                                                                                                                                                              //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
+(void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned long long)arg2 ;
+(id)_drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned long long)arg7 opaque:(BOOL)arg8 displayScale:(double)arg9 attributedTextProvider:(/*^block*/id)arg10 ;
+(CGSize)_validateAllowedSize:(CGSize)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_invalidate;
-(BOOL)_isOpaque;
-(unsigned long long)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(unsigned long long)arg1 ;
-(double)displayScale;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setDisplayScale:(double)arg1 ;
-(void)addInvalidationObserver:(id)arg1 ;
-(void)removeInvalidationObserver:(id)arg1 ;
-(void)_notifyInvalidationObservers;
-(void)_setOpaque:(BOOL)arg1 ;
-(void)_setUsesImageCachingInsteadOfStringDrawingContextCaching:(BOOL)arg1 ;
-(void)setAttributedTextProvider:(id)arg1 ;
-(id)drawingContextForText:(id)arg1 allowedSize:(CGSize)arg2 ;
-(void)beginCoalescingInvalidationNotifications;
-(void)endCoalescingInvalidationNotifications;
-(void)preHeatForStrings:(id)arg1 allowedSize:(CGSize)arg2 ;
-(id)attributedTextProvider;
-(BOOL)_usesImageCachingInsteadOfStringDrawingContextCaching;
@end

