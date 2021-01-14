/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableDictionary, NSMutableArray, NSString;

@interface APXPCListenerManager : NSObject <NSXPCListenerDelegate> {

	NSMutableDictionary* _delegates;
	NSMutableArray* _listeners;

}

@property (nonatomic,retain) NSMutableDictionary * delegates;              //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addDelegate:(id)arg1 ;
-(NSMutableDictionary *)delegates;
-(void)setDelegates:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)listeners;
-(id)init;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)dealloc;
@end

