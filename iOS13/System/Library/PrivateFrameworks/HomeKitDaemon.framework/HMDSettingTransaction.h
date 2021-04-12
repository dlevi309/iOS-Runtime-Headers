/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingTransaction.h>

@protocol HMDSettingTransaction <NSObject>
@required
-(void)addSettingModel:(id)arg1;
-(void)addModel:(id)arg1;

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
-(NSMutableSet *)updateModels;
-(void)addSettingModel:(id)arg1 ;
-(void)addModel:(id)arg1 ;
-(id)initWithTransactionLabel:(id)arg1 ;
-(id)initForInitialCreationWithTransactionLabel:(id)arg1 ;
-(void)addModelToBeUpdated:(id)arg1 ;
-(NSString *)transactionLabel;
-(NSMutableSet *)removeUUIDs;
-(BOOL)initialCreation;
@end

