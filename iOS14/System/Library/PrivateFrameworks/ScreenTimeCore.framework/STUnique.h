/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@protocol STPersistenceControllerProtocol;
@class NSPersistentHistoryToken;

@interface STUnique : NSObject {

	NSPersistentHistoryToken* _migratedToken;
	id<STPersistenceControllerProtocol> _persistenceController;

}

@property (nonatomic,retain) id<STPersistenceControllerProtocol> persistenceController;              //@synthesize persistenceController=_persistenceController - In the implementation block
+(id)localToCloudMapping;
+(Class)_internalClassForSerializableClassName:(id)arg1 ;
+(id)cloudToLocalMapping;
+(id)mirroredEntityNames;
-(void)setPersistenceController:(id<STPersistenceControllerProtocol>)arg1 ;
-(id<STPersistenceControllerProtocol>)persistenceController;
-(id)historyTokenForAuthor:(id)arg1 fromStore:(id)arg2 ;
-(BOOL)addHistoryToken:(id)arg1 forAuthor:(id)arg2 toMetadataForStore:(id)arg3 error:(id*)arg4 ;
-(void)newResolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
-(id)initWithPersistenceController:(id)arg1 ;
-(BOOL)areLocalChangesInterestingWithError:(id*)arg1 ;
-(BOOL)migrateWithError:(id*)arg1 ;
-(void)resolveConflictsBetweenLocalDeltas:(id)arg1 cloudDeltas:(id)arg2 ;
@end

