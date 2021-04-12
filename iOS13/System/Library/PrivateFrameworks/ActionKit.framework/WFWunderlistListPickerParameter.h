/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFAccountAccessResource;

@interface WFWunderlistListPickerParameter : WFEnumerationParameter {

	BOOL _hasLoadedLists;
	NSArray* _possibleStates;
	WFAccountAccessResource* _accessResource;

}

@property (assign,nonatomic) BOOL hasLoadedLists;                                          //@synthesize hasLoadedLists=_hasLoadedLists - In the implementation block
@property (assign,nonatomic,__weak) WFAccountAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
-(void)dealloc;
-(id)possibleStates;
-(id)lists;
-(void)setLists:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(id)defaultSerializedRepresentation;
-(WFAccountAccessResource *)accessResource;
-(void)fetchListsIfNeeded;
-(void)loadListsFromCache;
-(id)listNamed:(id)arg1 ;
-(void)setAccessResource:(WFAccountAccessResource *)arg1 ;
-(BOOL)hasLoadedLists;
-(void)setHasLoadedLists:(BOOL)arg1 ;
@end

