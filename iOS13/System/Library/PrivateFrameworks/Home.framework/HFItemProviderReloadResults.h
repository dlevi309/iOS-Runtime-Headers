/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface HFItemProviderReloadResults : NSObject <NSCopying> {

	NSSet* _addedItems;
	NSSet* _removedItems;
	NSSet* _existingItems;

}

@property (nonatomic,retain) NSSet * addedItems;                 //@synthesize addedItems=_addedItems - In the implementation block
@property (nonatomic,retain) NSSet * removedItems;               //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,retain) NSSet * existingItems;              //@synthesize existingItems=_existingItems - In the implementation block
@property (nonatomic,readonly) NSSet * allItems; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)existingItems;
-(id)resultsByMergingWithResults:(id)arg1 ;
-(NSSet *)addedItems;
-(void)setAddedItems:(NSSet *)arg1 ;
-(NSSet *)removedItems;
-(void)setRemovedItems:(NSSet *)arg1 ;
-(NSSet *)allItems;
-(id)initWithAddedItems:(id)arg1 removedItems:(id)arg2 existingItems:(id)arg3 ;
-(void)setExistingItems:(NSSet *)arg1 ;
@end

