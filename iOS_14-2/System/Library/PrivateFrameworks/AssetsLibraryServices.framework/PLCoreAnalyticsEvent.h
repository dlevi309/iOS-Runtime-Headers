/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface PLCoreAnalyticsEvent : NSObject {

	NSString* _event;
	NSMutableDictionary* _mutablePayload;

}

@property (readonly) NSDictionary * payload; 
-(NSDictionary *)payload;
-(void)mergePayload:(id)arg1 ;
-(id)description;
-(void)publish;
-(void)removeKey:(id)arg1 ;
-(id)initWithEvent:(id)arg1 payload:(id)arg2 ;
-(void)addKey:(id)arg1 value:(id)arg2 ;
@end

