/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)className;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)referenceId;
-(void)setReferenceId:(NSString *)arg1 ;
@end

