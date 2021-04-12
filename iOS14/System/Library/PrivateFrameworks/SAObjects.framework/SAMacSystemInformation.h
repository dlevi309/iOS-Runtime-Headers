/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAMacSystemInformation : SADomainObject

@property (nonatomic,copy) NSString * query; 
+(id)systemInformation;
+(id)systemInformationWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)query;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setQuery:(NSString *)arg1 ;
@end

