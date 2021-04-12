/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSData, NSDictionary, NSString;

@interface SAParsecContext : SADomainObject

@property (nonatomic,copy) NSData * httpBody; 
@property (nonatomic,copy) NSDictionary * httpHeaders; 
@property (nonatomic,copy) NSString * httpMethod; 
@property (nonatomic,copy) NSString * httpUrl; 
+(id)parsecContext;
+(id)parsecContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSData *)httpBody;
-(NSString *)httpMethod;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(NSString *)httpUrl;
-(NSDictionary *)httpHeaders;
-(void)setHttpBody:(NSData *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)setHttpUrl:(NSString *)arg1 ;
@end

