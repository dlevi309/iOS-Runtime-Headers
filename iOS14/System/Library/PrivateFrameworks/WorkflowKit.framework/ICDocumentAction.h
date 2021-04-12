/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction {

	NSArray* _inputContentClasses;
	NSArray* _fileTypes;

}

@property (nonatomic,readonly) NSArray * fileTypes;              //@synthesize fileTypes=_fileTypes - In the implementation block
-(id)descriptionDictionary;
-(id)name;
-(NSArray *)fileTypes;
-(id)identifier;
-(id)inputContentClasses;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)fileTypeForOpeningItem:(id)arg1 ;
@end

