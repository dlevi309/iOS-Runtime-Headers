/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setEvernoteAccessResource:(WFEvernoteAccessResource *)arg1 ;
-(void)updateTags;
-(WFEvernoteAccessResource *)evernoteAccessResource;
@end

