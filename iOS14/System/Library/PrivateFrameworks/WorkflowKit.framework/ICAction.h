/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSArray, NSDictionary, ICApp, NSString, NSDate;

@interface ICAction : NSObject {

	NSArray* _inputContentClasses;
	NSArray* _outputContentClasses;
	NSDictionary* _definition;
	ICApp* _app;
	NSArray* _inputMapping;
	NSArray* _outputMapping;

}

@property (nonatomic,readonly) NSDictionary * definition;                            //@synthesize definition=_definition - In the implementation block
@property (nonatomic,readonly) ICApp * app;                                          //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) NSArray * capabilities; 
@property (nonatomic,readonly) NSArray * inputMapping;                               //@synthesize inputMapping=_inputMapping - In the implementation block
@property (nonatomic,readonly) NSArray * outputMapping;                              //@synthesize outputMapping=_outputMapping - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) id parameterSummaryDefinition; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * subcategory; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (getter=isDiscontinued,nonatomic,readonly) BOOL discontinued; 
@property (getter=isDiscoverable,nonatomic,readonly) BOOL discoverable; 
@property (nonatomic,readonly) NSDictionary * descriptionDictionary; 
@property (nonatomic,readonly) BOOL inputRequired; 
@property (nonatomic,readonly) NSArray * inputContentClasses;                        //@synthesize inputContentClasses=_inputContentClasses - In the implementation block
@property (nonatomic,readonly) NSArray * outputContentClasses;                       //@synthesize outputContentClasses=_outputContentClasses - In the implementation block
@property (nonatomic,readonly) BOOL inputsMultipleItems; 
@property (nonatomic,readonly) BOOL outputsMultipleItems; 
@property (nonatomic,readonly) BOOL skipItemClassesSupportingInput; 
@property (nonatomic,readonly) BOOL neverSuggested; 
@property (nonatomic,readonly) BOOL createsWFAction; 
@property (nonatomic,readonly) NSString * wfActionClassName; 
@property (nonatomic,readonly) NSArray * requiredResourceNames; 
@property (nonatomic,readonly) NSString * inputParameterSourceKey; 
-(BOOL)isDiscoverable;
-(NSDictionary *)descriptionDictionary;
-(NSArray *)capabilities;
-(NSArray *)keywords;
-(NSDate *)lastModifiedDate;
-(NSString *)category;
-(NSString *)shortName;
-(NSString *)subcategory;
-(NSString *)name;
-(id)description;
-(NSDate *)creationDate;
-(NSDictionary *)definition;
-(unsigned long long)hash;
-(ICApp *)app;
-(NSString *)identifier;
-(BOOL)isDiscontinued;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)inputMapping;
-(NSArray *)outputMapping;
-(NSArray *)outputContentClasses;
-(BOOL)inputRequired;
-(NSArray *)inputContentClasses;
-(BOOL)outputsMultipleItems;
-(BOOL)inputsMultipleItems;
-(id)parameterSummaryDefinition;
-(BOOL)neverSuggested;
-(id)initWithDefinition:(id)arg1 app:(id)arg2 ;
-(NSString *)inputParameterSourceKey;
-(BOOL)skipItemClassesSupportingInput;
-(BOOL)createsWFAction;
-(NSString *)wfActionClassName;
-(NSArray *)requiredResourceNames;
-(void)processInput:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
@end

