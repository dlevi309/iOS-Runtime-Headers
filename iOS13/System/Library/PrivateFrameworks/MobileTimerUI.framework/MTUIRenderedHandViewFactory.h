/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/


#import <MobileTimerUI/MobileTimerUI-Structs.h>
@class NSBundle, NSString, NSMutableDictionary;

@interface MTUIRenderedHandViewFactory : NSObject {

	NSBundle* _resourcesBundle;
	NSString* _imagePath;
	CGPoint _offset;
	CGSize _scale;
	CGPDFPageRef _page;
	CGSize _viewSize;
	BOOL _allowCaching;
	NSMutableDictionary* _angleCache;
	unsigned long long _registeredClientsCount;

}

@property (nonatomic,readonly) NSString * key; 
@property (assign,nonatomic) unsigned long long registeredClientsCount;              //@synthesize registeredClientsCount=_registeredClientsCount - In the implementation block
@property (nonatomic,readonly) BOOL allowCaching;                                    //@synthesize allowCaching=_allowCaching - In the implementation block
+(void)flushAllCaches;
+(id)keyForBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 ;
+(id)registerForFactoryWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
+(void)unregisterForFactory:(id)arg1 ;
-(void)dealloc;
-(NSString *)key;
-(void)flushCache;
-(BOOL)allowCaching;
-(id)initWithBundle:(id)arg1 imagePath:(id)arg2 offset:(CGPoint)arg3 scale:(CGSize)arg4 allowCaching:(BOOL)arg5 ;
-(unsigned long long)registeredClientsCount;
-(void)setRegisteredClientsCount:(unsigned long long)arg1 ;
-(id)renderImageForAngle:(double)arg1 viewSize:(CGSize)arg2 ;
-(id)imageForAngle:(double)arg1 viewSize:(CGSize)arg2 ;
@end

