/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol HMApplicationData;
@class NSString, NSArray;

@interface HFReorderableHomeKitItemList : NSObject <NSCopying, NSMutableCopying> {

	id<HMApplicationData> _applicationDataContainer;
	NSString* _category;
	NSArray* _sortedHomeKitObjectIdentifiers;

}

@property (nonatomic,readonly) NSString * _applicationDataKey; 
@property (nonatomic,copy) NSArray * sortedHomeKitObjectIdentifiers;                               //@synthesize sortedHomeKitObjectIdentifiers=_sortedHomeKitObjectIdentifiers - In the implementation block
@property (nonatomic,__weak,readonly) id<HMApplicationData> applicationDataContainer;              //@synthesize applicationDataContainer=_applicationDataContainer - In the implementation block
@property (nonatomic,readonly) NSString * category;                                                //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) id sortedHomeKitItemComparator; 
@property (nonatomic,readonly) id sortedHomeKitObjectComparator; 
+(id)_dataForHomeKitItem:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)category;
-(id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2 ;
-(id)sortedHomeKitObjectComparator;
-(NSString *)_applicationDataKey;
-(id<HMApplicationData>)applicationDataContainer;
-(NSArray *)sortedHomeKitObjectIdentifiers;
-(void)setSortedHomeKitObjectIdentifiers:(NSArray *)arg1 ;
-(/*^block*/id)_homeKitItemDataComparator;
-(/*^block*/id)_sortedHomeKitIdentifierComparator;
-(/*^block*/id)_actionSetTypeComparator;
-(/*^block*/id)_reorderableObjectDateAddedComparator;
-(/*^block*/id)_reorderableObjectTitleComparator;
-(id)sortedHomeKitItemComparator;
@end

