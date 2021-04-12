/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(float)left;
-(void)setLeft:(float)arg1 ;
-(float)top;
-(float)bottom;
-(float)right;
-(void)setBottom:(float)arg1 ;
-(void)setRight:(float)arg1 ;
-(void)setTop:(float)arg1 ;
-(id)encodedClassName;
@end

