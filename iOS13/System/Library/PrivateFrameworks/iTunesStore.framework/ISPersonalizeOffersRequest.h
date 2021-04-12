/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSMutableDictionary* _itemIDsByType;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allItemTypes; 
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)addItemIdentifier:(id)arg1 forItemType:(id)arg2 ;
-(NSArray *)allItemTypes;
-(id)itemIdentifiersForItemType:(id)arg1 ;
@end

