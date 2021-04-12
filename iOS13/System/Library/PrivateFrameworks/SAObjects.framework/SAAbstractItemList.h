/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setDomainObjects:(NSArray *)arg1 ;
-(NSArray *)domainObjects;
@end

