/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)possibleStates;
-(void)setProjects:(id)arg1 ;
-(id)projects;
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

