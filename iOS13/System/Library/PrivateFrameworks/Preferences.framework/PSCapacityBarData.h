/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PSCapacityBarData : NSObject <NSCopying> {

	NSArray* _orderedCategories;
	NSArray* _adjustedCategories;
	BOOL _hideTinyCategories;
	int _sortStyle;
	long long _categoryLimit;
	long long _capacity;
	long long _bytesUsed;
	NSArray* _categories;

}

@property (assign) long long categoryLimit;                     //@synthesize categoryLimit=_categoryLimit - In the implementation block
@property (assign) BOOL hideTinyCategories;                     //@synthesize hideTinyCategories=_hideTinyCategories - In the implementation block
@property (assign) int sortStyle;                               //@synthesize sortStyle=_sortStyle - In the implementation block
@property (assign) long long capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (assign) long long bytesUsed;                         //@synthesize bytesUsed=_bytesUsed - In the implementation block
@property (nonatomic,retain) NSArray * categories;              //@synthesize categories=_categories - In the implementation block
@property (readonly) NSArray * orderedCategories; 
@property (readonly) NSArray * adjustedCategories; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)capacity;
-(void)setCapacity:(long long)arg1 ;
-(NSArray *)categories;
-(void)setCategories:(NSArray *)arg1 ;
-(NSArray *)orderedCategories;
-(long long)bytesUsed;
-(BOOL)hideTinyCategories;
-(NSArray *)adjustedCategories;
-(long long)categoryLimit;
-(void)setCategoryLimit:(long long)arg1 ;
-(void)setHideTinyCategories:(BOOL)arg1 ;
-(int)sortStyle;
-(void)setSortStyle:(int)arg1 ;
-(void)setBytesUsed:(long long)arg1 ;
@end

