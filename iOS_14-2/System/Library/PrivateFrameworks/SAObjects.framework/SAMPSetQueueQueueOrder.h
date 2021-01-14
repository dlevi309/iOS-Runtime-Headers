/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPSetQueueQueueOrder : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL descending; 
@property (nonatomic,copy) NSString * mediaItemProperty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setQueueQueueOrder;
+(id)setQueueQueueOrderWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)mediaItemProperty;
-(void)setMediaItemProperty:(NSString *)arg1 ;
-(BOOL)descending;
-(void)setDescending:(BOOL)arg1 ;
@end

