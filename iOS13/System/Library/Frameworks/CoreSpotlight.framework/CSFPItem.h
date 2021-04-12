/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class FPItem, NSString, CSSearchableItem;

@interface CSFPItem : NSObject {

	FPItem* _internal;

}

@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) CSSearchableItem * searchableItem; 
+(void)initialize;
+(id)itemWithFileURL:(id)arg1 ;
+(id)itemWithFileURL:(id)arg1 forEUID:(unsigned)arg2 ;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithFPItem:(id)arg1 ;
-(CSSearchableItem *)searchableItem;
@end

