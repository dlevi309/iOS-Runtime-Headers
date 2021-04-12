/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject {

	BOOL _memoizesNil;
	NSMutableDictionary* __dictionary;

}

@property (nonatomic,readonly) NSMutableDictionary * _dictionary;              //@synthesize _dictionary=__dictionary - In the implementation block
@property (nonatomic,readonly) BOOL memoizesNil;                               //@synthesize memoizesNil=_memoizesNil - In the implementation block
-(id)init;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)_dictionary;
-(id)initWithMemoizesNil:(BOOL)arg1 ;
-(id)objectForKey:(id)arg1 memoizationBlock:(/*^block*/id)arg2 ;
-(BOOL)memoizesNil;
@end

