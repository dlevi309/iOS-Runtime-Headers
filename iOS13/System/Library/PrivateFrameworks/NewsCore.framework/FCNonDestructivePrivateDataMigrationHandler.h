/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol FCNonDestructivePrivateDataActionProvider;
@class NSArray;

@interface FCNonDestructivePrivateDataMigrationHandler : NSObject {

	BOOL _privateDataSyncingEnabled;
	id<FCNonDestructivePrivateDataActionProvider> _privateDataActionProvider;
	NSArray* _privateDataControllers;

}

@property (nonatomic,retain) id<FCNonDestructivePrivateDataActionProvider> privateDataActionProvider;              //@synthesize privateDataActionProvider=_privateDataActionProvider - In the implementation block
@property (nonatomic,copy) NSArray * privateDataControllers;                                                       //@synthesize privateDataControllers=_privateDataControllers - In the implementation block
@property (assign,getter=isPrivateDataSyncingEnabled,nonatomic) BOOL privateDataSyncingEnabled;                    //@synthesize privateDataSyncingEnabled=_privateDataSyncingEnabled - In the implementation block
-(id)init;
-(BOOL)isPrivateDataSyncingEnabled;
-(id)initWithPrivateDataActionProvider:(id)arg1 privateDataControllers:(id)arg2 privateDataSyncingEnabled:(BOOL)arg3 ;
-(void)handleMigration;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(NSArray *)privateDataControllers;
-(id<FCNonDestructivePrivateDataActionProvider>)privateDataActionProvider;
-(void)setPrivateDataActionProvider:(id<FCNonDestructivePrivateDataActionProvider>)arg1 ;
-(void)setPrivateDataControllers:(NSArray *)arg1 ;
@end

