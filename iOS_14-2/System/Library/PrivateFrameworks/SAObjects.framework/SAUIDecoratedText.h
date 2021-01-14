/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SAUIDecoratedText : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * ducId; 
@property (nonatomic,copy) NSArray * regions; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decoratedText;
+(id)decoratedTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)ducId;
-(NSArray *)regions;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setRegions:(NSArray *)arg1 ;
-(void)setDucId:(NSString *)arg1 ;
@end

