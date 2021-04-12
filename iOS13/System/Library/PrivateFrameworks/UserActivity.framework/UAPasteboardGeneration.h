/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/


@class NSSet, NSArray, NSMutableDictionary;

@interface UAPasteboardGeneration : NSObject {

	unsigned long long _generation;
	NSSet* _allTypes;
	NSArray* _items;
	NSMutableDictionary* _typePaths;

}

@property (copy) NSSet * allTypes;                               //@synthesize allTypes=_allTypes - In the implementation block
@property (copy) NSArray * items;                                //@synthesize items=_items - In the implementation block
@property (retain) NSMutableDictionary * typePaths;              //@synthesize typePaths=_typePaths - In the implementation block
@property (readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)generation;
-(BOOL)addItem:(id)arg1 ;
-(BOOL)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithGeneration:(unsigned long long)arg1 ;
-(id)getTypePaths;
-(NSSet *)allTypes;
-(void)setAllTypes:(NSSet *)arg1 ;
-(void)setTypePaths:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)typePaths;
-(void)fetchTypeURL:(id)arg1 ;
@end

