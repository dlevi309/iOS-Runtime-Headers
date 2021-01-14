/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAResultObjectReference : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * className; 
@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,copy) NSString * referenceId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultObjectReference;
+(id)resultObjectReferenceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)className;
-(void)setClassName:(NSString *)arg1 ;
-(NSString *)referenceId;
-(void)setReferenceId:(NSString *)arg1 ;
@end

