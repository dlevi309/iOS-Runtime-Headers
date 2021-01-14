/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAAceResult : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceResult;
+(id)aceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setResult:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id<SAAceSerializable>)result;
@end

