/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSEventListenerObject.h>

@protocol IKJSEventListenerObject <JSExport>
@required
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
-(void)removeEventListener:(id)arg1 :(id)arg2;

@end


@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject> {

	NSMutableDictionary* _eventListenersMap;

}

@property (nonatomic,retain) NSMutableDictionary * eventListenersMap;              //@synthesize eventListenersMap=_eventListenersMap - In the implementation block
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)invokeListeners:(id)arg1 extraInfo:(id)arg2 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(id)_eventInformationForType:(id)arg1 extraInfo:(id)arg2 ;
-(BOOL)invokeSingleListener:(id)arg1 extraInfo:(id)arg2 return:(id*)arg3 ;
-(BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3 ;
-(NSMutableDictionary *)eventListenersMap;
-(void)setEventListenersMap:(NSMutableDictionary *)arg1 ;
-(BOOL)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4 ;
@end

