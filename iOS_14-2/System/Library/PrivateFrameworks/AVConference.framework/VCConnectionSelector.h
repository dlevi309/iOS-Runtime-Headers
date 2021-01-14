/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCConnectionProtocol;
#import <AVConference/AVConference-Structs.h>
@class NSArray;

@interface VCConnectionSelector : NSObject {

	BOOL _isMultiwaySession;
	SCD_Struct_VC94 _connectionSelectionPolicy;
	NSArray* _linkPreferenceOrder;
	id<VCConnectionProtocol> _primaryConnection;
	id<VCConnectionProtocol> _secondaryConnection;
	id<VCConnectionProtocol> _connectionForDuplication;
	id<VCConnectionProtocol> _connectionForDuplicationNonProbingVersion;
	id<VCConnectionProtocol> _lastPrimaryConnectionInUse;

}

@property (nonatomic,retain) id<VCConnectionProtocol> primaryConnection;                                      //@synthesize primaryConnection=_primaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> secondaryConnection;                                    //@synthesize secondaryConnection=_secondaryConnection - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> lastPrimaryConnectionInUse;                             //@synthesize lastPrimaryConnectionInUse=_lastPrimaryConnectionInUse - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplication;                               //@synthesize connectionForDuplication=_connectionForDuplication - In the implementation block
@property (nonatomic,retain) id<VCConnectionProtocol> connectionForDuplicationNonProbingVersion;              //@synthesize connectionForDuplicationNonProbingVersion=_connectionForDuplicationNonProbingVersion - In the implementation block
@property (nonatomic,copy) NSArray * linkPreferenceOrder;                                                     //@synthesize linkPreferenceOrder=_linkPreferenceOrder - In the implementation block
-(id<VCConnectionProtocol>)secondaryConnection;
-(void)dealloc;
-(id<VCConnectionProtocol>)primaryConnection;
-(id<VCConnectionProtocol>)lastPrimaryConnectionInUse;
-(void)useConnectionAsPrimary:(id)arg1 ;
-(void)setSecondaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)setPrimaryConnection:(id<VCConnectionProtocol>)arg1 ;
-(void)setConnectionForDuplicationNonProbingVersion:(id<VCConnectionProtocol>)arg1 ;
-(void)setConnectionForDuplication:(id<VCConnectionProtocol>)arg1 ;
-(BOOL)isPrimaryConnectionSameAsConnection:(id)arg1 ;
-(void)updatePrimaryWithConnection:(id)arg1 ;
-(void)updateSecondaryWithConnection:(id)arg1 ;
-(void)setLastPrimaryConnectionInUse:(id<VCConnectionProtocol>)arg1 ;
-(id)initWithMultiwayEnabled:(BOOL)arg1 ;
-(void)updateConnectionForDuplicationForDuplicationReason:(unsigned char)arg1 duplicationEnhancementEnabled:(BOOL)arg2 preferredLocalInterfaceForDuplication:(int)arg3 preferredRemoteInterfaceForDuplication:(int)arg4 connectionArray:(id)arg5 ;
-(BOOL)selectPrimaryAndSecondaryWithConnection:(id)arg1 ;
-(SCD_Struct_VC94*)getConnectionSelectionPolicy;
-(void)updateConnectionSelectionPolicyWithPreferRelayOverP2P:(BOOL)arg1 preferNonVPN:(BOOL)arg2 ;
-(id<VCConnectionProtocol>)connectionForDuplication;
-(id<VCConnectionProtocol>)connectionForDuplicationNonProbingVersion;
-(NSArray *)linkPreferenceOrder;
-(void)setLinkPreferenceOrder:(NSArray *)arg1 ;
@end

