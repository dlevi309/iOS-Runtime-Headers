/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * displayHints; 
@property (nonatomic,copy) NSString * speakableInSequence; 
@property (nonatomic,copy) NSString * speakableStandalone; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createVOXListItem;
+(id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)displayHints;
-(void)setDisplayHints:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)speakableInSequence;
-(void)setSpeakableInSequence:(NSString *)arg1 ;
-(NSString *)speakableStandalone;
-(void)setSpeakableStandalone:(NSString *)arg1 ;
@end

