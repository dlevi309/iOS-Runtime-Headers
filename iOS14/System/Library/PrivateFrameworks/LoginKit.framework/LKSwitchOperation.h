/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
*/

#import <LoginKit/LKOperation.h>

@class LKRecoverEMCSOperation, NSMutableArray, NSArray;

@interface LKSwitchOperation : LKOperation {

	LKRecoverEMCSOperation* _recoverEMCSOperation;
	unsigned long long _switchType;
	NSMutableArray* _mutableKeychainItemsAddedAfterRecoverEMCS;

}

@property (nonatomic,retain) NSMutableArray * mutableKeychainItemsAddedAfterRecoverEMCS;              //@synthesize mutableKeychainItemsAddedAfterRecoverEMCS=_mutableKeychainItemsAddedAfterRecoverEMCS - In the implementation block
@property (nonatomic,readonly) LKRecoverEMCSOperation * recoverEMCSOperation;                         //@synthesize recoverEMCSOperation=_recoverEMCSOperation - In the implementation block
@property (nonatomic,readonly) NSArray * keychainItemsAddedAfterRecoverEMCS; 
@property (nonatomic,readonly) unsigned long long switchType;                                         //@synthesize switchType=_switchType - In the implementation block
-(id)init;
-(id)dictionary;
-(void)setRecoverEMCSOperation:(LKRecoverEMCSOperation *)arg1 ;
-(LKRecoverEMCSOperation *)recoverEMCSOperation;
-(unsigned long long)switchType;
-(void)setSwitchType:(unsigned long long)arg1 ;
-(void)addKeychainItemAdditionEvent:(id)arg1 ;
-(NSMutableArray *)mutableKeychainItemsAddedAfterRecoverEMCS;
-(NSArray *)keychainItemsAddedAfterRecoverEMCS;
-(id)switchTypeString;
-(void)removeLastKeychainItemAdditionEvent;
-(void)setMutableKeychainItemsAddedAfterRecoverEMCS:(NSMutableArray *)arg1 ;
@end

