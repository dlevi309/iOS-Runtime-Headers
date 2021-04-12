/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying> {

	NSArray* _stringsAndVariables;

}

@property (nonatomic,readonly) NSArray * stringsAndVariables;                               //@synthesize stringsAndVariables=_stringsAndVariables - In the implementation block
@property (nonatomic,readonly) NSArray * variables; 
@property (nonatomic,readonly) NSString * stringByRemovingVariables; 
@property (nonatomic,readonly) NSString * stringByReplacingVariablesWithNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)dictionaryIsSerializedVariableString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithVariable:(id)arg1 ;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithStringsAndVariables:(id)arg1 ;
-(id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(/*^block*/id)arg2 ;
-(void)processWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoContentItemsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoStringsAndAttachmentsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)stringByRemovingVariables;
-(NSString *)stringByReplacingVariablesWithNames;
-(NSArray *)variables;
-(NSArray *)stringsAndVariables;
-(id)variablesOfType:(id)arg1 ;
-(BOOL)representsSingleContentVariable;
-(void)addVariableDelegate:(id)arg1 ;
-(void)removeVariableDelegate:(id)arg1 ;
@end

