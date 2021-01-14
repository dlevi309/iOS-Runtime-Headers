/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@class MTBaseEventDataProvider, NSMutableDictionary;

@interface MTEventHandlers : MTObject {

	MTBaseEventDataProvider* _base;
	NSMutableDictionary* _registrations;

}

@property (nonatomic,retain) MTBaseEventDataProvider * base;                   //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registrations;              //@synthesize registrations=_registrations - In the implementation block
-(MTBaseEventDataProvider *)base;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSMutableDictionary *)registrations;
-(void)setBase:(MTBaseEventDataProvider *)arg1 ;
-(void)setRegistrations:(NSMutableDictionary *)arg1 ;
-(void)registerDefaultEventHandlers;
-(Class)baseDataProviderClass;
-(void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2 eventData:(id)arg3 ;
-(void)registerEventHandlerName:(id)arg1 eventHandlerClass:(Class)arg2 ;
-(void)registerEventHandlerName:(id)arg1 eventData:(id)arg2 ;
@end

