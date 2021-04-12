/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSArray;

@interface WLKContinueWatchingCollection : NSObject {

	NSString* _collectionID;
	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * collectionID;              //@synthesize collectionID=_collectionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(NSString *)collectionID;
@end

