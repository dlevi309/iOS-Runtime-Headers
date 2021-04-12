/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery {

	NSArray* _strokeGroupItems;
	NSDictionary* _strokeGroupItemsByID;

}

@property (setter=_setStrokeGroupItems:,nonatomic,copy) NSArray * strokeGroupItems;                           //@synthesize strokeGroupItems=_strokeGroupItems - In the implementation block
@property (setter=_setStrokeGroupItemsByID:,nonatomic,copy) NSDictionary * strokeGroupItemsByID;              //@synthesize strokeGroupItemsByID=_strokeGroupItemsByID - In the implementation block
-(id)debugName;
-(void)dealloc;
-(NSArray *)strokeGroupItems;
-(id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(CGPoint)arg2 tokenizationLevel:(long long)arg3 completion:(/*^block*/id)arg4 shouldCancel:(/*^block*/id)arg5 ;
-(void)q_updateQueryResult;
-(id)q_strokeGroupItemsFromSessionResult:(id)arg1 ;
-(void)_setStrokeGroupItems:(id)arg1 ;
-(long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2 ;
-(id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(CGPoint)arg2 tokenizationLevel:(long long)arg3 ;
-(NSDictionary *)strokeGroupItemsByID;
-(void)_setStrokeGroupItemsByID:(id)arg1 ;
@end

