/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSArray, WLKContinueWatchingCollection;

@interface WLKContinueWatchingResponse : NSObject {

	NSArray* _items;
	WLKContinueWatchingCollection* _featured;

}

@property (nonatomic,copy,readonly) NSArray * items;                                       //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) WLKContinueWatchingCollection * featured;              //@synthesize featured=_featured - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)items;
-(WLKContinueWatchingCollection *)featured;
@end

