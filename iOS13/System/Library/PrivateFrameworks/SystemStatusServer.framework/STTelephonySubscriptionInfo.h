/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>

@class NSString;

@interface STTelephonySubscriptionInfo : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding> {

	NSString* _identifier;
	NSString* _SIMLabel;
	NSString* _shortSIMLabel;
	NSString* _SIMStatus;
	unsigned long long _registrationStatus;
	unsigned long long _cellularRegistrationStatus;
	unsigned long long _dataConnectionType;
	BOOL _preferredForDataConnections;
	BOOL _providingDataConnection;
	BOOL _registeredWithoutCellular;
	unsigned long long _signalStrengthBars;
	unsigned long long _maxSignalStrengthBars;
	NSString* _operatorName;
	NSString* _lastKnownNetworkCountryCode;
	unsigned long long _callForwardingIndicator;
	BOOL _networkReselectionNeeded;
	long long _registrationRejectionCauseCode;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                                         //@synthesize identifier=_identifier - In the implementation block
@property (setter=IMLabel,nonatomic,copy,readonly) NSString * SIMLabel;                                            //@synthesize SIMLabel=_SIMLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortSIMLabel;                                                      //@synthesize shortSIMLabel=_shortSIMLabel - In the implementation block
@property (setter=IMStatus,nonatomic,copy,readonly) NSString * SIMStatus;                                          //@synthesize SIMStatus=_SIMStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long registrationStatus;                                              //@synthesize registrationStatus=_registrationStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long cellularRegistrationStatus;                                      //@synthesize cellularRegistrationStatus=_cellularRegistrationStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long dataConnectionType;                                              //@synthesize dataConnectionType=_dataConnectionType - In the implementation block
@property (getter=isPreferredForDataConnections,nonatomic,readonly) BOOL preferredForDataConnections;              //@synthesize preferredForDataConnections=_preferredForDataConnections - In the implementation block
@property (getter=isProvidingDataConnection,nonatomic,readonly) BOOL providingDataConnection;                      //@synthesize providingDataConnection=_providingDataConnection - In the implementation block
@property (getter=isRegisteredWithoutCellular,nonatomic,readonly) BOOL registeredWithoutCellular;                  //@synthesize registeredWithoutCellular=_registeredWithoutCellular - In the implementation block
@property (nonatomic,readonly) unsigned long long signalStrengthBars;                                              //@synthesize signalStrengthBars=_signalStrengthBars - In the implementation block
@property (nonatomic,readonly) unsigned long long maxSignalStrengthBars;                                           //@synthesize maxSignalStrengthBars=_maxSignalStrengthBars - In the implementation block
@property (nonatomic,copy,readonly) NSString * operatorName;                                                       //@synthesize operatorName=_operatorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastKnownNetworkCountryCode;                                        //@synthesize lastKnownNetworkCountryCode=_lastKnownNetworkCountryCode - In the implementation block
@property (nonatomic,readonly) unsigned long long callForwardingIndicator;                                         //@synthesize callForwardingIndicator=_callForwardingIndicator - In the implementation block
@property (getter=isNetworkReselectionNeeded,nonatomic,readonly) BOOL networkReselectionNeeded;                    //@synthesize networkReselectionNeeded=_networkReselectionNeeded - In the implementation block
@property (nonatomic,readonly) long long registrationRejectionCauseCode;                                           //@synthesize registrationRejectionCauseCode=_registrationRejectionCauseCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithSubscriptionInfo:(id)arg1 ;
-(unsigned long long)registrationStatus;
-(NSString *)operatorName;
-(unsigned long long)signalStrengthBars;
-(NSString *)SIMLabel;
-(NSString *)shortSIMLabel;
-(NSString *)SIMStatus;
-(unsigned long long)cellularRegistrationStatus;
-(unsigned long long)dataConnectionType;
-(BOOL)isPreferredForDataConnections;
-(BOOL)isProvidingDataConnection;
-(BOOL)isRegisteredWithoutCellular;
-(unsigned long long)maxSignalStrengthBars;
-(NSString *)lastKnownNetworkCountryCode;
-(unsigned long long)callForwardingIndicator;
-(BOOL)isNetworkReselectionNeeded;
-(long long)registrationRejectionCauseCode;
-(id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

