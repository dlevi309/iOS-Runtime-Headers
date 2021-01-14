/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

@class NSString, NSArray;


@protocol MCPerAccountVPNPayloadProtocol
@property (nonatomic,retain,readonly) NSString * VPNUUID; 
@property (nonatomic,retain,readonly) NSArray * mailAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * contactsAccountIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * calendarAccountIdentifiers; 
@optional
-(NSArray *)mailAccountIdentifiers;
-(NSArray *)contactsAccountIdentifiers;
-(NSArray *)calendarAccountIdentifiers;

@required
-(NSString *)VPNUUID;

@end

