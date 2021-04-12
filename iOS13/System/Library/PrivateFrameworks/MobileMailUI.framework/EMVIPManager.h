/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
*/

@class NSSet, EAEmailAddressSet;


@protocol EMVIPManager <NSObject>
@property (nonatomic,readonly) BOOL hasVIPs; 
@property (nonatomic,copy,readonly) NSSet * allVIPs; 
@property (nonatomic,copy,readonly) EAEmailAddressSet * allVIPEmailAddresses; 
@required
-(void)saveVIPs:(id)arg1;
-(void)removeVIPsWithIdentifiers:(id)arg1;
-(void)removeVIPsWithEmailAddresses:(id)arg1;
-(BOOL)isVIPAddress:(id)arg1;
-(EAEmailAddressSet *)allVIPEmailAddresses;
-(id)vipWithIdentifier:(id)arg1;
-(BOOL)hasVIPs;
-(NSSet *)allVIPs;

@end

