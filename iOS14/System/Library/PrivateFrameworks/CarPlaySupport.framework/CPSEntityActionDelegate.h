/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/


@protocol CPSEntityActionDelegate <NSObject>
@required
-(BOOL)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forPOI:(id)arg3;
-(BOOL)entityContentViewController:(id)arg1 regionDidChange:(SCD_Struct_CP5)arg2;
-(BOOL)entityContentViewController:(id)arg1 didSelectPointOfInterestWithIdentifier:(id)arg2;
-(BOOL)entityContentViewController:(id)arg1 didPressButton:(id)arg2 forEntity:(id)arg3;

@end

