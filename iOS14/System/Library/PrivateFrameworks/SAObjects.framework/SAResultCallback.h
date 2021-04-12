/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long code; 
@property (nonatomic,copy) NSArray * commandReferences; 
@property (nonatomic,copy) NSArray * commands; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resultCallback;
+(id)resultCallbackWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)commands;
-(void)setCode:(long long)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commandReferences;
-(void)setCommandReferences:(NSArray *)arg1 ;
-(long long)code;
@end

