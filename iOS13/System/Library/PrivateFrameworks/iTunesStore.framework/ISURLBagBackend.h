/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)diagnostics;
-(id)dictionaryRepresentationForBagWithKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 forBagWithKey:(id)arg2 ;
-(void)removeBagValuesForBagWithKey:(id)arg1 ;
-(void)addBagValues:(id)arg1 forBagWithKey:(id)arg2 ;
-(NSMutableDictionary *)bagValuesDictionary;
-(id)_valueForKey:(id)arg1 forBagValuesNode:(id)arg2 ;
-(id)_bagValuesMapTableWithInitialValues:(id)arg1 ;
-(SSDoubleLinkedList *)bagValuesList;
-(id)deltaDictionaryRepresentationForBagWithKey:(id)arg1 ;
-(void)setBagValuesDictionary:(NSMutableDictionary *)arg1 ;
-(void)setBagValuesList:(SSDoubleLinkedList *)arg1 ;
@end

