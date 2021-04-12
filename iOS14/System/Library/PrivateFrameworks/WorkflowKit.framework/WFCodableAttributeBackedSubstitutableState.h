/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFVariableSubstitutableParameterState.h>

@class INCodableAttribute, INStringLocalizer, NSString;

@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState {

	INCodableAttribute* _codableAttribute;
	INStringLocalizer* _stringLocalizer;
	NSString* _readableTitle;
	NSString* _readableSubtitle;

}

@property (nonatomic,readonly) INCodableAttribute * codableAttribute;              //@synthesize codableAttribute=_codableAttribute - In the implementation block
@property (nonatomic,readonly) INStringLocalizer * stringLocalizer;                //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
@property (nonatomic,copy) NSString * readableTitle;                               //@synthesize readableTitle=_readableTitle - In the implementation block
@property (nonatomic,copy) NSString * readableSubtitle;                            //@synthesize readableSubtitle=_readableSubtitle - In the implementation block
+(id)processingValueClasses;
-(INCodableAttribute *)codableAttribute;
-(id)serializedRepresentation;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(void)processWithContext:(id)arg1 userInputRequiredHandler:(/*^block*/id)arg2 valueHandler:(/*^block*/id)arg3 ;
-(INStringLocalizer *)stringLocalizer;
-(NSString *)readableTitle;
-(NSString *)readableSubtitle;
-(id)initWithValue:(id)arg1 codableAttribute:(id)arg2 stringLocalizer:(id)arg3 ;
-(void)setReadableTitle:(NSString *)arg1 ;
-(void)setReadableSubtitle:(NSString *)arg1 ;
@end

