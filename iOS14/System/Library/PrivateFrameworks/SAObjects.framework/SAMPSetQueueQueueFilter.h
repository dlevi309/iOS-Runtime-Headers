/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueFilter : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (nonatomic,copy) NSString * operation; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setQueueQueueFilter;
+(id)setQueueQueueFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setOperation:(NSString *)arg1 ;
-(NSString *)operation;
-(id)encodedClassName;
-(NSString *)mediaItemProperty;
-(void)setMediaItemProperty:(NSString *)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
@end

