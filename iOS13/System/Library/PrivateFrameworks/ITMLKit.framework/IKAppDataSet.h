/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface IKAppDataSet : NSObject <NSCopying> {

	NSArray* _itemIDs;
	NSArray* _items;
	NSDictionary* _usedPrototypesByIdentifier;
	NSDictionary* _indexTitles;

}

@property (nonatomic,copy,readonly) NSArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * usedPrototypesByIdentifier;              //@synthesize usedPrototypesByIdentifier=_usedPrototypesByIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * indexTitles;                             //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemIDs;                                      //@synthesize itemIDs=_itemIDs - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)items;
-(NSDictionary *)indexTitles;
-(NSArray *)itemIDs;
-(id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3 ;
-(NSDictionary *)usedPrototypesByIdentifier;
@end

