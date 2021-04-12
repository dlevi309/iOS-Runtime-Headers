/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)dataType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setDataType:(NSString *)arg1 ;
-(SAPerson *)object;
-(void)setData:(NSString *)arg1 ;
-(void)setObject:(SAPerson *)arg1 ;
-(NSString *)data;
-(id<SAAceComparable>)typedData;
-(void)setTypedData:(id<SAAceComparable>)arg1 ;
-(void)setDisplayText:(NSString *)arg1 ;
-(NSString *)displayText;
@end

