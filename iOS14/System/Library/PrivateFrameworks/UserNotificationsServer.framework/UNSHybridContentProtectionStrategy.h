/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/UNSContentProtectionStrategy.h>

@protocol UNSHybridContentProtectionStrategyDelegate;
@class NSString, UNSAtomicDataContentProtectionStrategy, UNSFileHandleContentProtectionStrategy;

@interface UNSHybridContentProtectionStrategy : NSObject <UNSContentProtectionStrategy> {

	id<UNSHybridContentProtectionStrategyDelegate> _delegate;
	NSString* _minimumProtection;
	BOOL _needsMerge;
	UNSAtomicDataContentProtectionStrategy* _protectedContentAvailableStrategy;
	UNSFileHandleContentProtectionStrategy* _protectedContentUnavailableStrategy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_mergeIsSupported;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)initWithFileProtectionType:(id)arg1 delegate:(id)arg2 ;
-(void)importDataWithImportHandler:(/*^block*/id)arg1 ;
-(BOOL)dataIsAvailableAtPath:(id)arg1 ;
-(BOOL)writeData:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(BOOL)isProtectedDataAvailable;
-(id)_strategyForProtectionState;
-(void)migrateDataAtPath:(id)arg1 toPath:(id)arg2 ;
-(id)dataAtPath:(id)arg1 ;
@end

