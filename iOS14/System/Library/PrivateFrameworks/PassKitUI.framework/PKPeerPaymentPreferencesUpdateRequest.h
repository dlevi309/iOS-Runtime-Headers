/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSMutableSet, PKPeerPaymentPreferences, NSSet;

@interface PKPeerPaymentPreferencesUpdateRequest : NSObject {

	NSMutableSet* _sections;
	PKPeerPaymentPreferences* _updatedPreferences;

}

@property (nonatomic,readonly) PKPeerPaymentPreferences * updatedPreferences;              //@synthesize updatedPreferences=_updatedPreferences - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sections;                                      //@synthesize sections=_sections - In the implementation block
-(NSSet *)sections;
-(id)initWithUpdatedPreferences:(id)arg1 section:(long long)arg2 ;
-(id)description;
-(void)coalesceWithRequest:(id)arg1 ;
-(PKPeerPaymentPreferences *)updatedPreferences;
@end

