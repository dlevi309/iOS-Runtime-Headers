/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
*/

#import <BackBoardHIDEventFoundation/BKHIDEventClient.h>

@class NSString, NSArray, NSSet;

@interface BKHIDEventDeliveryClient : BKHIDEventClient {

	NSString* _bundleIdentifier;
	NSArray* _deliveryRoots;
	NSArray* _keyCommandDeliveryRoots;
	NSArray* _deferringRules;
	NSSet* _keyCommandsRegistrations;
	NSSet* _resolutions;

}

@property (nonatomic,retain) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * deliveryRoots;                        //@synthesize deliveryRoots=_deliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * keyCommandDeliveryRoots;              //@synthesize keyCommandDeliveryRoots=_keyCommandDeliveryRoots - In the implementation block
@property (nonatomic,retain) NSArray * deferringRules;                       //@synthesize deferringRules=_deferringRules - In the implementation block
@property (nonatomic,retain) NSSet * keyCommandsRegistrations;               //@synthesize keyCommandsRegistrations=_keyCommandsRegistrations - In the implementation block
@property (nonatomic,retain) NSSet * resolutions;                            //@synthesize resolutions=_resolutions - In the implementation block
-(NSString *)bundleIdentifier;
-(NSSet *)resolutions;
-(NSArray *)keyCommandDeliveryRoots;
-(void)setDeferringRules:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)deferringRules;
-(void)setKeyCommandDeliveryRoots:(NSArray *)arg1 ;
-(void)setKeyCommandsRegistrations:(NSSet *)arg1 ;
-(void)setDeliveryRoots:(NSArray *)arg1 ;
-(void)setResolutions:(NSSet *)arg1 ;
-(NSSet *)keyCommandsRegistrations;
-(NSArray *)deliveryRoots;
@end

