/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, SSDoubleLinkedList;

@interface ISURLBagBackend : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _bagValuesDictionary;
	SSDoubleLinkedList* _bagValuesList;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;               //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bagValuesDictionary;              //@synthesize bagValuesDictionary=_bagValuesDictionary - In the implementation block
@property (nonatomic,retain) SSDoubleLinkedList * bagValuesList;                     //@synthesize bagValuesList=_bagValuesList - In the implementation block
+(BOOL)_bagValue:(id)arg1 equalsBagValue:(id)arg2 ;
-(void)setBagValuesList:(SSDoubleLinkedList *)arg1 ;
-(id)diagnostics;
-(SSDoubleLinkedList *)bagValuesList;
-(id)init;
-(id)_bagValuesMapTableWithInitialValues:(id)arg1 ;
-(id)valueForKey:(id)arg1 forBagWithKey:(id)arg2 ;
-(void)removeBagValuesForBagWithKey:(id)arg1 ;
-(id)description;
-(void)addBagValues:(id)arg1 forBagWithKey:(id)arg2 ;
-(NSMutableDictionary *)bagValuesDictionary;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setBagValuesDictionary:(NSMutableDictionary *)arg1 ;
-(id)_valueForKey:(id)arg1 forBagValuesNode:(id)arg2 ;
-(id)dictionaryRepresentationForBagWithKey:(id)arg1 ;
-(id)deltaDictionaryRepresentationForBagWithKey:(id)arg1 ;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

