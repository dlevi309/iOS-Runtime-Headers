/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAStockReference : SADomainObject

@property (nonatomic,copy) NSString * companyName; 
@property (nonatomic,copy) NSString * symbol; 
+(id)reference;
+(id)referenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setCompanyName:(NSString *)arg1 ;
-(NSString *)symbol;
-(void)setSymbol:(NSString *)arg1 ;
-(NSString *)companyName;
@end

