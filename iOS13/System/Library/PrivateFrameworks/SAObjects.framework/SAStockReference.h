/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)reference;
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)symbol;
-(id)groupIdentifier;
-(void)setSymbol:(NSString *)arg1 ;
-(NSString *)companyName;
-(void)setCompanyName:(NSString *)arg1 ;
-(id)encodedClassName;
@end

