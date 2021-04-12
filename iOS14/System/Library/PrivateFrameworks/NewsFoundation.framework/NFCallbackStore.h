/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

