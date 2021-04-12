/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFDynamicTagFieldParameter.h>
#import <libobjc.A.dylib/WFDynamicTagFieldDataSource.h>

@class WFEvernoteAccessResource, NSString;

@interface WFEvernoteTagsTagFieldParameter : WFDynamicTagFieldParameter <WFDynamicTagFieldDataSource> {

	WFEvernoteAccessResource* _evernoteAccessResource;

}

@property (nonatomic,retain) WFEvernoteAccessResource * evernoteAccessResource;              //@synthesize evernoteAccessResource=_evernoteAccessResource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)referencedActionResourceClasses;
-(void)wasAddedToWorkflow;
-(id)suggestedTagsForTagField:(id)arg1 ;
-(void)setActionResources:(id)arg1 ;
-(void)updateTags;
-(void)setEvernoteAccessResource:(WFEvernoteAccessResource *)arg1 ;
-(WFEvernoteAccessResource *)evernoteAccessResource;
@end

