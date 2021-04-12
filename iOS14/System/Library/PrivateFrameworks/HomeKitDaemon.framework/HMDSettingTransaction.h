/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingTransaction.h>

@protocol HMDSettingTransaction <NSObject>
@required
-(void)addSettingModel:(id)arg1;
-(void)addModel:(id)arg1;
-(void)removeModelWithIdentifier:(id)arg1;

@end


@class NSString, NSMutableSet;

@interface HMDSettingTransaction : NSObject <HMDSettingTransaction> {

	BOOL _initialCreation;
	NSString* _transactionLabel;
	NSMutableSet* _updateModels;
	NSMutableSet* _removeUUIDs;

}

@property (readonly) NSString * transactionLabel;                   //@synthesize transactionLabel=_transactionLabel - In the implementation block
@property (readonly) NSMutableSet * updateModels;                   //@synthesize updateModels=_updateModels - In the implementation block
@property (readonly) NSMutableSet * removeUUIDs;                    //@synthesize removeUUIDs=_removeUUIDs - In the implementation block
@property (readonly) BOOL initialCreation;                          //@synthesize initialCreation=_initialCreation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)transactionLabel;
-(NSMutableSet *)updateModels;
-(NSMutableSet *)removeUUIDs;
-(void)addSettingModel:(id)arg1 ;
-(void)addModel:(id)arg1 ;
-(void)removeModelWithIdentifier:(id)arg1 ;
-(id)initWithTransactionLabel:(id)arg1 ;
-(id)initForInitialCreationWithTransactionLabel:(id)arg1 ;
-(void)addModelToBeUpdated:(id)arg1 ;
-(BOOL)initialCreation;
@end

