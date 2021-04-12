/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<NPKExpressGymKitAvailabilityManagerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressGymKitAvailabilityManagerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)dealloc;
-(BOOL)isExpressGymKitAllowed;
-(id)_conflictingPassUniqueID;
-(void)allowEnableExpressGymKitWithVisibleViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PKPaymentPass *)conflictingPass;
@end

