/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)lists;
-(void)setLists:(id)arg1 ;
-(id)possibleStates;
-(void)dealloc;
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

