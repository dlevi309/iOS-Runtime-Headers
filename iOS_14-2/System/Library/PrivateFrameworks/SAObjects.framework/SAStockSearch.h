/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAStockSearch : SADomainCommand

@property (nonatomic,copy) NSArray * stockReferences; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)stockReferences;
-(void)setStockReferences:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

