/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFTodoistProjectPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedProjects;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedProjects;                                       //@synthesize hasLoadedProjects=_hasLoadedProjects - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(id)projects;
-(void)setProjects:(id)arg1 ;
-(id)possibleStates;
-(void)dealloc;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(WFAccountAccessResource *)accessResource;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(void)fetchProjectsIfNeeded;
-(void)loadProjectsFromCache;
-(id)projectNamed:(id)arg1 ;
-(BOOL)hasLoadedProjects;
-(void)setHasLoadedProjects:(BOOL)arg1 ;
@end

