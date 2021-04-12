/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface PLCoreAnalyticsEvent : NSObject {

	NSString* _event;
	NSMutableDictionary* _mutablePayload;

}

@property (readonly) NSDictionary * payload; 
-(id)description;
-(void)publish;
-(NSDictionary *)payload;
-(void)removeKey:(id)arg1 ;
-(id)initWithEvent:(id)arg1 payload:(id)arg2 ;
-(void)addKey:(id)arg1 value:(id)arg2 ;
-(void)mergePayload:(id)arg1 ;
@end

