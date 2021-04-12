/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSData *)httpBody;
-(NSString *)httpMethod;
-(id)encodedClassName;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(NSDictionary *)arg1 ;
-(void)setHttpBody:(NSData *)arg1 ;
-(void)setHttpMethod:(NSString *)arg1 ;
-(NSString *)httpUrl;
-(void)setHttpUrl:(NSString *)arg1 ;
@end

