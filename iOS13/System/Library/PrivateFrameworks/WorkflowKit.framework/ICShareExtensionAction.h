/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/ICAction.h>

@class ICShareExtension, NSString, NSArray;

@interface ICShareExtensionAction : ICAction {

	ICShareExtension* _shareExtension;

}

@property (nonatomic,__weak,readonly) ICShareExtension * shareExtension;              //@synthesize shareExtension=_shareExtension - In the implementation block
@property (nonatomic,readonly) NSString * inputType; 
@property (nonatomic,readonly) NSArray * socialTypes; 
@property (nonatomic,readonly) NSArray * contentItemClasses; 
-(id)name;
-(id)identifier;
-(id)category;
-(NSString *)inputType;
-(BOOL)inputRequired;
-(NSArray *)contentItemClasses;
-(id)inputContentClasses;
-(BOOL)inputsMultipleItems;
-(id)initWithDefinition:(id)arg1 shareExtension:(id)arg2 ;
-(id)descriptionDictionary;
-(NSArray *)socialTypes;
-(id)textItemHandling;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(void)addContentToShareController:(id)arg1 withInput:(id)arg2 parameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(ICShareExtension *)shareExtension;
@end

