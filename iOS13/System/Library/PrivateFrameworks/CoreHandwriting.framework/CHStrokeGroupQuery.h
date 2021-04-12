/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSDictionary;

@interface CHStrokeGroupQuery : CHQuery {

	NSArray* _strokeGroupItems;
	NSDictionary* _strokeGroupItemsByID;

}

@property (setter=_setStrokeGroupItems:,nonatomic,copy) NSArray * strokeGroupItems;                           //@synthesize strokeGroupItems=_strokeGroupItems - In the implementation block
@property (setter=_setStrokeGroupItemsByID:,nonatomic,copy) NSDictionary * strokeGroupItemsByID;              //@synthesize strokeGroupItemsByID=_strokeGroupItemsByID - In the implementation block
-(void)dealloc;
-(id)debugName;
-(void)q_updateQueryResult;
-(id)q_strokeGroupItemsFromSessionResult:(id)arg1 ;
-(void)_setStrokeGroupItems:(id)arg1 ;
-(long long)q_itemTypeForStrokeGroup:(id)arg1 recognitionResult:(id)arg2 ;
-(NSArray *)strokeGroupItems;
-(NSDictionary *)strokeGroupItemsByID;
-(void)_setStrokeGroupItemsByID:(id)arg1 ;
@end

