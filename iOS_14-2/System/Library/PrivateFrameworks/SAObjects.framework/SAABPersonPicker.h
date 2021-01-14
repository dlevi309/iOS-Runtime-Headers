/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (nonatomic,copy) NSArray * persons; 
@property (assign,nonatomic) BOOL showImmediately; 
+(id)personPicker;
+(id)personPickerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)persons;
-(void)setPersons:(NSArray *)arg1 ;
-(BOOL)showImmediately;
-(void)setShowImmediately:(BOOL)arg1 ;
@end

