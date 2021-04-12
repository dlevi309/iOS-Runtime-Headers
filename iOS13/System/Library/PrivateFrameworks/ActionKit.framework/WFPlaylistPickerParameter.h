/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFPlaylistSubstitutableState, WFAppleMusicAccessResource;

@interface WFPlaylistPickerParameter : WFEnumerationParameter {

	BOOL _showLibrary;
	BOOL _generatingNotifications;
	NSArray* _possibleStates;
	WFPlaylistSubstitutableState* _entireLibraryState;
	WFAppleMusicAccessResource* _appleMusicAccessResource;

}

@property (nonatomic,readonly) BOOL showLibrary;                                                 //@synthesize showLibrary=_showLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;                                         //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFPlaylistSubstitutableState * entireLibraryState;                  //@synthesize entireLibraryState=_entireLibraryState - In the implementation block
@property (assign,nonatomic) BOOL generatingNotifications;                                       //@synthesize generatingNotifications=_generatingNotifications - In the implementation block
@property (nonatomic,retain) WFAppleMusicAccessResource * appleMusicAccessResource;              //@synthesize appleMusicAccessResource=_appleMusicAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
+(BOOL)hasPlaylistAccess;
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)setActionResources:(id)arg1 ;
-(void)setAppleMusicAccessResource:(WFAppleMusicAccessResource *)arg1 ;
-(void)authorizationStatusDidChange;
-(void)updateChangeNotificationRegistration;
-(BOOL)showLibrary;
-(WFPlaylistSubstitutableState *)entireLibraryState;
-(void)setEntireLibraryState:(WFPlaylistSubstitutableState *)arg1 ;
-(BOOL)generatingNotifications;
-(void)setGeneratingNotifications:(BOOL)arg1 ;
-(WFAppleMusicAccessResource *)appleMusicAccessResource;
@end

