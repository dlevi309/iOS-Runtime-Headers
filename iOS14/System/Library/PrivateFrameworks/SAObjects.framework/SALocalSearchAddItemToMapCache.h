/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (nonatomic,retain) SALocalSearchMapItem * mapItem; 
+(id)addItemToMapCache;
+(id)addItemToMapCacheWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchMapItem *)mapItem;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
@end

