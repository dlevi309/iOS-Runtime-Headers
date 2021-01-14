/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/SGMicrodataItemScope.h>

@class NSMutableArray, NSSet, NSArray;

@interface SGMicrodataItem : SGMicrodataItemScope {

	NSMutableArray* _itemRef;
	NSSet* _itemType;

}

@property (nonatomic,readonly) NSSet * itemType;               //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,readonly) NSArray * itemRef;              //@synthesize itemRef=_itemRef - In the implementation block
-(NSSet *)itemType;
-(NSArray *)itemRef;
-(void)resolveItemRefsWithDocument:(id)arg1 ;
-(id)initWithItemType:(id)arg1 itemRef:(id)arg2 ;
@end

