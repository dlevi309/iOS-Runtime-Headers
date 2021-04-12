/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKExpressGymKitConflictResolver.h>

@protocol NPKExpressGymKitAvailabilityManagerDelegate;
@class PKPaymentPass, NSString;

@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver> {

	int _notificationToken;
	id<NPKExpressGymKitAvailabilityManagerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isExpressGymKitAllowed; 
@property (nonatomic,readonly) PKPaymentPass * conflictingPass; 
@property (assign,nonatomic,__weak) id<NPKExpressGymKitAvailabilityManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<NPKExpressGymKitAvailabilityManagerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressGymKitAvailabilityManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)isExpressGymKitAllowed;
-(id)_conflictingPassUniqueID;
-(void)allowEnableExpressGymKitWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPaymentPass *)conflictingPass;
@end

