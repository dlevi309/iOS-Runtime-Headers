/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAPerson;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * data; 
@property (nonatomic,copy) NSString * dataType; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,retain) SAPerson * object; 
@property (nonatomic,retain) id<SAAceComparable> typedData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personAttribute;
+(id)personAttributeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)st_contactAddressValue;
-(SAPerson *)object;
-(void)setObject:(SAPerson *)arg1 ;
-(NSString *)data;
-(void)setData:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)dataType;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(id)encodedClassName;
-(id<SAAceComparable>)typedData;
-(void)setTypedData:(id<SAAceComparable>)arg1 ;
@end

