/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject

@property (nonatomic,copy) NSArray * domainObjects; 
@property (nonatomic,copy) NSNumber * selectedIndex; 
+(id)abstractItemList;
+(id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)domainObjects;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)selectedIndex;
-(void)setDomainObjects:(NSArray *)arg1 ;
@end

