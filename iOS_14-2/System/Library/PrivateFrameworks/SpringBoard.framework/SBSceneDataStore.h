/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface SBSceneDataStore : NSObject {

	NSString* _identifier;
	NSMutableDictionary* _data;
	NSMutableDictionary* _archivedObjectCache;
	/*^block*/id _handler;
	BOOL _invalidated;

}

@property (getter=_data,nonatomic,readonly) NSDictionary * data;                    //@synthesize data=_data - In the implementation block
@property (getter=_isInvalidated,nonatomic,readonly) BOOL invalidated;              //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
-(BOOL)_isInvalidated;
-(void)_invalidate;
-(id)_initWithIdentifier:(id)arg1 data:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)_invokeChangeHandler;
-(id)_data;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(NSString *)identifier;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

