/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@class NSMutableDictionary, NSMutableArray, NSArray;

@interface SUObjectPool : NSObject {

	NSMutableDictionary* _poolObjects;
	NSMutableArray* _vendedObjects;

}

@property (nonatomic,readonly) NSArray * vendedObjects;              //@synthesize vendedObjects=_vendedObjects - In the implementation block
-(void)dealloc;
-(id)copyPoppedObjectForClass:(Class)arg1 ;
-(NSArray *)vendedObjects;
-(id)addObjectsOfClass:(Class)arg1 count:(long long)arg2 forClass:(Class)arg3 ;
-(void)addObjects:(id)arg1 forClass:(Class)arg2 ;
@end

