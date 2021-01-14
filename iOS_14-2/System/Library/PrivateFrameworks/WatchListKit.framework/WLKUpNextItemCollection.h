/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSDate, NSArray;

@interface WLKUpNextItemCollection : NSObject {

	NSString* _title;
	NSDate* _timestamp;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSArray * items;                      //@synthesize items=_items - In the implementation block
-(NSDate *)timestamp;
-(NSArray *)items;
-(id)description;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)title;
@end

