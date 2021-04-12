/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
*/

#import <SystemStatusServer/SystemStatusServer-Structs.h>
#import <SystemStatusServer/STTelephonySubscriptionInfo.h>

@class NSString;

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * SIMLabel; 
@property (nonatomic,copy) NSString * shortSIMLabel; 
@property (nonatomic,copy) NSString * SIMStatus; 
@property (assign,nonatomic) unsigned long long registrationStatus; 
@property (assign,nonatomic) unsigned long long cellularRegistrationStatus; 
@property (assign,nonatomic) unsigned long long dataConnectionType; 
@property (assign,getter=isPreferredForDataConnections,nonatomic) BOOL preferredForDataConnections; 
@property (assign,getter=isProvidingDataConnection,nonatomic) BOOL providingDataConnection; 
@property (assign,getter=isRegisteredWithoutCellular,nonatomic) BOOL registeredWithoutCellular; 
@property (assign,nonatomic) unsigned long long signalStrengthBars; 
@property (assign,nonatomic) unsigned long long maxSignalStrengthBars; 
@property (nonatomic,copy) NSString * operatorName; 
@property (nonatomic,copy) NSString * lastKnownNetworkCountryCode; 
@property (assign,nonatomic) unsigned long long callForwardingIndicator; 
@property (assign,getter=isNetworkReselectionNeeded,nonatomic) BOOL networkReselectionNeeded; 
@property (assign,nonatomic) long long registrationRejectionCauseCode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setSignalStrengthBars:(unsigned long long)arg1 ;
-(void)setSIMLabel:(NSString *)arg1 ;
-(void)setShortSIMLabel:(NSString *)arg1 ;
-(void)setSIMStatus:(NSString *)arg1 ;
-(void)setRegistrationStatus:(unsigned long long)arg1 ;
-(void)setCellularRegistrationStatus:(unsigned long long)arg1 ;
-(void)setDataConnectionType:(unsigned long long)arg1 ;
-(void)setPreferredForDataConnections:(BOOL)arg1 ;
-(void)setProvidingDataConnection:(BOOL)arg1 ;
-(void)setRegisteredWithoutCellular:(BOOL)arg1 ;
-(void)setMaxSignalStrengthBars:(unsigned long long)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(void)setLastKnownNetworkCountryCode:(NSString *)arg1 ;
-(void)setCallForwardingIndicator:(unsigned long long)arg1 ;
-(void)setNetworkReselectionNeeded:(BOOL)arg1 ;
-(void)setRegistrationRejectionCauseCode:(long long)arg1 ;
@end

