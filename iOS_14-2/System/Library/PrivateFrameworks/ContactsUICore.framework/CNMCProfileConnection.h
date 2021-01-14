/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNMCProfileConnection.h>

@protocol CNMCProfileConnection <NSObject>
@required
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
-(id)observableForManagedConfigChanged;

@end


@class NSString;

@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2 ;
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 ;
-(id)observableForManagedConfigChanged;
@end

