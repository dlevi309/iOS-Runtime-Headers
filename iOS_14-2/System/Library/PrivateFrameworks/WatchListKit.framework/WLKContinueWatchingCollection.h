/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)items;
-(NSString *)collectionID;
-(NSString *)title;
@end

