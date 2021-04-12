/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)rowCount;
-(NSNumber *)minimumHeight;
-(void)setMinimumHeight:(NSNumber *)arg1 ;
-(void)setRowCount:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(void)setShowTopBorder:(NSNumber *)arg1 ;
-(NSNumber *)showTopBorder;
-(NSNumber *)rowStartIndex;
-(void)setRowStartIndex:(NSNumber *)arg1 ;
@end

