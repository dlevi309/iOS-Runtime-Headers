/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/ICAction.h>

@class NSArray;

@interface ICDocumentAction : ICAction {

	NSArray* _inputContentClasses;
	NSArray* _fileTypes;

}

@property (nonatomic,readonly) NSArray * fileTypes;              //@synthesize fileTypes=_fileTypes - In the implementation block
-(id)name;
-(id)identifier;
-(NSArray *)fileTypes;
-(id)inputContentClasses;
-(id)descriptionDictionary;
-(void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(/*^block*/id)arg4 errorHandler:(/*^block*/id)arg5 ;
-(id)fileTypeForOpeningItem:(id)arg1 ;
@end

