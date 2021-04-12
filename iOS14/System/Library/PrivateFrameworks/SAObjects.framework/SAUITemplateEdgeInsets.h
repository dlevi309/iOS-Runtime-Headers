/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAUITemplateEdgeInsets : AceObject <SAAceSerializable>

@property (assign,nonatomic) float bottom; 
@property (assign,nonatomic) float left; 
@property (assign,nonatomic) float right; 
@property (assign,nonatomic) float top; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)edgeInsets;
+(id)edgeInsetsWithDictionary:(id)arg1 context:(id)arg2 ;
-(float)left;
-(id)groupIdentifier;
-(float)right;
-(id)encodedClassName;
-(void)setBottom:(float)arg1 ;
-(void)setLeft:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(float)bottom;
-(float)top;
@end

