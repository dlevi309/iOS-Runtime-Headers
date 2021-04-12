/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)addItem:(id)arg1 ;
-(unsigned long long)generation;
-(void)setItems:(NSArray *)arg1 ;
-(NSArray *)items;
-(NSSet *)allTypes;
-(id)getTypePaths;
-(BOOL)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2 ;
-(id)initWithGeneration:(unsigned long long)arg1 ;
-(void)setAllTypes:(NSSet *)arg1 ;
-(void)setTypePaths:(NSMutableDictionary *)arg1 ;
-(void)fetchTypeURL:(id)arg1 ;
-(NSMutableDictionary *)typePaths;
@end

