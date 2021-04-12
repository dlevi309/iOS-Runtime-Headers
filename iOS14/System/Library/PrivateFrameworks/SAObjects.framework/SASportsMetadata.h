/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * average; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)metadata;
-(id)groupIdentifier;
-(NSNumber *)average;
-(id)encodedClassName;
-(void)setSelected:(NSNumber *)arg1 ;
-(void)setAverage:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)value;
@end

