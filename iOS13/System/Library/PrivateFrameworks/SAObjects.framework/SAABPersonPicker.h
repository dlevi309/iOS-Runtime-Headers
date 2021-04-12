/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

