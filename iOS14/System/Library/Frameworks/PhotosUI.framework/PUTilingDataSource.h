/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject {

	NSString* _identifier;
	NSHashTable* __changeObservers;

}

@property (nonatomic,readonly) NSHashTable * _changeObservers;              //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(long long)numberOfSubItemsAtIndexPath:(id)arg1 ;
-(NSHashTable *)_changeObservers;
-(id)description;
-(void)enumerateIndexPathsStartingAtIndexPath:(id)arg1 reverseDirection:(BOOL)arg2 usingBlock:(/*^block*/id)arg3 ;
-(unsigned long long)hash;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

