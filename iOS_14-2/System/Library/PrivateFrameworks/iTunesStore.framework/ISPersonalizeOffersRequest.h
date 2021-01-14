/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithItems:(id)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSArray *)allItemTypes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)addItemIdentifier:(id)arg1 forItemType:(id)arg2 ;
-(id)itemIdentifiersForItemType:(id)arg1 ;
@end

