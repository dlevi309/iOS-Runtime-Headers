/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSDictionary, NSString, NSOrderedSet;

@interface ICContentMapping : NSObject {

	NSDictionary* _definition;

}

@property (nonatomic,readonly) NSDictionary * definition;                      //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) NSString * sourceType; 
@property (nonatomic,readonly) NSString * sourceKey; 
@property (nonatomic,readonly) NSString * destinationType; 
@property (nonatomic,readonly) NSString * destinationKey; 
@property (nonatomic,readonly) NSDictionary * valueMapping; 
@property (nonatomic,readonly) BOOL skipURLEncoding; 
@property (nonatomic,readonly) NSDictionary * parameterUI; 
@property (nonatomic,readonly) id parameterDefault; 
@property (nonatomic,readonly) BOOL supportsMultipleItems; 
@property (nonatomic,readonly) BOOL inputRequired; 
@property (nonatomic,readonly) NSOrderedSet * contentItemClasses; 
-(NSString *)sourceType;
-(NSString *)destinationType;
-(NSDictionary *)definition;
-(NSString *)sourceKey;
-(BOOL)supportsMultipleItems;
-(BOOL)skipURLEncoding;
-(void)getStringRepresentation:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
-(id)initWithDefinition:(id)arg1 ;
-(NSString *)destinationKey;
-(NSDictionary *)valueMapping;
-(NSDictionary *)parameterUI;
-(id)parameterDefault;
-(BOOL)inputRequired;
-(NSOrderedSet *)contentItemClasses;
-(void)getContentCollection:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
@end

