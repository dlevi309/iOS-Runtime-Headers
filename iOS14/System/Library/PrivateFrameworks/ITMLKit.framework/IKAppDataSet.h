/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDictionary *)indexTitles;
-(NSArray *)itemIDs;
-(NSArray *)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItems:(id)arg1 usedPrototypesByIdentifier:(id)arg2 indexTitles:(id)arg3 ;
-(NSDictionary *)usedPrototypesByIdentifier;
@end

