/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIScreenBasedObject.h>

@class UIScreen, NSDictionary, NSMutableDictionary, NSString;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	NSMutableDictionary* _graphCache;

}

@property (nonatomic,readonly) NSMutableDictionary * graphCache;              //@synthesize graphCache=_graphCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)graphCacheForScreen:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(NSMutableDictionary *)graphCache;
@end

