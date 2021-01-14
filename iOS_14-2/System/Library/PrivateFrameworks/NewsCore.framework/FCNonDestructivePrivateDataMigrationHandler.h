/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPrivateDataActionProvider:(id<FCNonDestructivePrivateDataActionProvider>)arg1 ;
-(id)init;
-(BOOL)isPrivateDataSyncingEnabled;
-(id<FCNonDestructivePrivateDataActionProvider>)privateDataActionProvider;
-(NSArray *)privateDataControllers;
-(void)setPrivateDataControllers:(NSArray *)arg1 ;
-(id)initWithPrivateDataActionProvider:(id)arg1 privateDataControllers:(id)arg2 privateDataSyncingEnabled:(BOOL)arg3 ;
-(void)setPrivateDataSyncingEnabled:(BOOL)arg1 ;
-(void)handleMigration;
@end

