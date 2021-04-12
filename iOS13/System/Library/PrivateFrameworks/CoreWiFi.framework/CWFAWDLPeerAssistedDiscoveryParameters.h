/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFAWDLPeerAssistedDiscoveryParameters : NSObject <NSCopying, NSSecureCoding> {

	int _peerSupportedChannelFlags;
	unsigned long long _localMasterChannel;
	unsigned long long _localPreferredChannel;
	unsigned long long _localSecondaryPreferredChannel;
	unsigned long long _localAssistedDiscoveryMetric;
	NSString* _peerMACAddress;
	unsigned long long _peerMasterChannel;
	unsigned long long _peerPreferredChannel;
	unsigned long long _peerSecondaryPreferredChannel;
	unsigned long long _peerAssistedDiscoveryMetric;

}

@property (assign,nonatomic) unsigned long long localMasterChannel;                          //@synthesize localMasterChannel=_localMasterChannel - In the implementation block
@property (assign,nonatomic) unsigned long long localPreferredChannel;                       //@synthesize localPreferredChannel=_localPreferredChannel - In the implementation block
@property (assign,nonatomic) unsigned long long localSecondaryPreferredChannel;              //@synthesize localSecondaryPreferredChannel=_localSecondaryPreferredChannel - In the implementation block
@property (assign,nonatomic) unsigned long long localAssistedDiscoveryMetric;                //@synthesize localAssistedDiscoveryMetric=_localAssistedDiscoveryMetric - In the implementation block
@property (nonatomic,copy) NSString * peerMACAddress;                                        //@synthesize peerMACAddress=_peerMACAddress - In the implementation block
@property (assign,nonatomic) unsigned long long peerMasterChannel;                           //@synthesize peerMasterChannel=_peerMasterChannel - In the implementation block
@property (assign,nonatomic) unsigned long long peerPreferredChannel;                        //@synthesize peerPreferredChannel=_peerPreferredChannel - In the implementation block
@property (assign,nonatomic) unsigned long long peerSecondaryPreferredChannel;               //@synthesize peerSecondaryPreferredChannel=_peerSecondaryPreferredChannel - In the implementation block
@property (assign,nonatomic) unsigned long long peerAssistedDiscoveryMetric;                 //@synthesize peerAssistedDiscoveryMetric=_peerAssistedDiscoveryMetric - In the implementation block
@property (assign,nonatomic) int peerSupportedChannelFlags;                                  //@synthesize peerSupportedChannelFlags=_peerSupportedChannelFlags - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)localMasterChannel;
-(unsigned long long)localPreferredChannel;
-(unsigned long long)localSecondaryPreferredChannel;
-(unsigned long long)localAssistedDiscoveryMetric;
-(NSString *)peerMACAddress;
-(unsigned long long)peerMasterChannel;
-(unsigned long long)peerPreferredChannel;
-(unsigned long long)peerSecondaryPreferredChannel;
-(unsigned long long)peerAssistedDiscoveryMetric;
-(int)peerSupportedChannelFlags;
-(BOOL)isEqualToAWDLParameters:(id)arg1 ;
-(void)setLocalMasterChannel:(unsigned long long)arg1 ;
-(void)setLocalPreferredChannel:(unsigned long long)arg1 ;
-(void)setLocalSecondaryPreferredChannel:(unsigned long long)arg1 ;
-(void)setLocalAssistedDiscoveryMetric:(unsigned long long)arg1 ;
-(void)setPeerMACAddress:(NSString *)arg1 ;
-(void)setPeerMasterChannel:(unsigned long long)arg1 ;
-(void)setPeerPreferredChannel:(unsigned long long)arg1 ;
-(void)setPeerSecondaryPreferredChannel:(unsigned long long)arg1 ;
-(void)setPeerAssistedDiscoveryMetric:(unsigned long long)arg1 ;
-(void)setPeerSupportedChannelFlags:(int)arg1 ;
@end

