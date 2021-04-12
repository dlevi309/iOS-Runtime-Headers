/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFPubliclyDescribable.h>

@class NSArray, NSString;

@interface EDSearchableIndexUpdates : NSObject <EFPubliclyDescribable> {

	NSArray* _itemsRequiringIndexing;
	NSArray* _removedIdentifiers;
	NSArray* _removedDomainIdentifiers;

}

@property (nonatomic,copy) NSArray * itemsRequiringIndexing;                      //@synthesize itemsRequiringIndexing=_itemsRequiringIndexing - In the implementation block
@property (nonatomic,copy) NSArray * removedIdentifiers;                          //@synthesize removedIdentifiers=_removedIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * removedDomainIdentifiers;                    //@synthesize removedDomainIdentifiers=_removedDomainIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasUpdates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
+(id)updates;
-(NSString *)description;
-(NSString *)ef_publicDescription;
-(void)setItemsRequiringIndexing:(NSArray *)arg1 ;
-(NSArray *)removedIdentifiers;
-(NSArray *)itemsRequiringIndexing;
-(NSArray *)removedDomainIdentifiers;
-(void)setRemovedDomainIdentifiers:(NSArray *)arg1 ;
-(void)setRemovedIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasUpdates;
@end

