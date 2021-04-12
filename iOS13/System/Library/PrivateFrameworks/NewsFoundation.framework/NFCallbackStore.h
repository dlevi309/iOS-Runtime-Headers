/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSMutableDictionary;

@interface NFCallbackStore : NSObject {

	NSMutableDictionary* _store;

}

@property (nonatomic,readonly) NSMutableDictionary * store;              //@synthesize store=_store - In the implementation block
-(id)init;
-(NSMutableDictionary *)store;
-(void)storeCallbackDefinition:(id)arg1 forKey:(id)arg2 scope:(id)arg3 ;
-(id)lookupForKey:(id)arg1 ;
@end

