/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SASVDialogNode : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * children; 
@property (nonatomic,copy) NSString * nodeTypeHint; 
@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dialogNode;
+(id)dialogNodeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)children;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)nodeTypeHint;
-(void)setNodeTypeHint:(NSString *)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)value;
@end

