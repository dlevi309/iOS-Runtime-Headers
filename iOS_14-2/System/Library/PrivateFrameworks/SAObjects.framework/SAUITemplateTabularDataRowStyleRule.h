/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUITemplateTabularDataRowStyleRule : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * minimumHeight; 
@property (nonatomic,copy) NSNumber * rowCount; 
@property (nonatomic,copy) NSNumber * rowStartIndex; 
@property (nonatomic,copy) NSNumber * showTopBorder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tabularDataRowStyleRule;
+(id)tabularDataRowStyleRuleWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setRowCount:(NSNumber *)arg1 ;
-(NSNumber *)rowStartIndex;
-(void)setRowStartIndex:(NSNumber *)arg1 ;
-(NSNumber *)showTopBorder;
-(void)setShowTopBorder:(NSNumber *)arg1 ;
-(NSNumber *)rowCount;
@end

