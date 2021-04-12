/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)nodeTypeHint;
-(void)setNodeTypeHint:(NSString *)arg1 ;
@end

