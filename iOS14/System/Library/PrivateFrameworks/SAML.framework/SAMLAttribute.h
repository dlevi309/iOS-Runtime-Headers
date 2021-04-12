/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSArray;

@interface SAMLAttribute : SAMLBaseElement

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,readonly) NSString * nameFormat; 
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSArray * values; 
+(id)createElement:(id*)arg1 ;
-(NSArray *)values;
-(NSString *)name;
-(NSString *)nameFormat;
-(void)setName:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(void)addAttributeValue:(id)arg1 ;
@end

