/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceObjectReference : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * referenceIdentifier; 
@property (nonatomic,copy) NSString * referenceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectReference;
+(id)aceObjectReferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)referenceIdentifier;
-(NSString *)referenceType;
-(void)setReferenceType:(NSString *)arg1 ;
-(void)setReferenceIdentifier:(NSString *)arg1 ;
@end

