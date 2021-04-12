/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_invalidate;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)_data;
-(NSString *)identifier;
-(BOOL)_isInvalidated;
-(id)safeObjectForKey:(id)arg1 ofType:(Class)arg2 ;
-(void)setArchivedObject:(id)arg1 forKey:(id)arg2 ;
-(id)_initWithIdentifier:(id)arg1 data:(id)arg2 changeHandler:(/*^block*/id)arg3 ;
-(void)_invokeChangeHandler;
-(id)unarchivedObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
@end

