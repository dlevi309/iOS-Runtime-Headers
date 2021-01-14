/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {

	NSMutableDictionary* _cacheWithoutInputMode;
	NSMutableDictionary* _cacheWithInputMode;

}
+(id)sharedInstance;
-(id)flush;
-(id)init;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3 ;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3 ;
@end

