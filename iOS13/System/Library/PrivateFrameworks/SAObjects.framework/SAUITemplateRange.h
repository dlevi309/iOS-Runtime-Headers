/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUITemplateRange : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long length; 
@property (assign,nonatomic) long long location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)range;
+(id)rangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(id)groupIdentifier;
-(long long)location;
-(void)setLocation:(long long)arg1 ;
-(id)encodedClassName;
@end

