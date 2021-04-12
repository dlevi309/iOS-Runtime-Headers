/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <EMVIPReader,NSObject>
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(NSSet *)allVIPs;
-(id)vipWithIdentifier:(id)arg1;

@end

