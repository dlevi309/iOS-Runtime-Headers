/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)updates;
-(NSString *)ef_publicDescription;
-(NSString *)description;
-(void)setItemsRequiringIndexing:(NSArray *)arg1 ;
-(NSArray *)removedIdentifiers;
-(NSArray *)itemsRequiringIndexing;
-(NSArray *)removedDomainIdentifiers;
-(void)setRemovedDomainIdentifiers:(NSArray *)arg1 ;
-(void)setRemovedIdentifiers:(NSArray *)arg1 ;
-(BOOL)hasUpdates;
@end

