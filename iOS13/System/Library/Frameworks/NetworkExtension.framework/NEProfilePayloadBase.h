/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadBaseDelegate.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {

	NSDictionary* _payloadAtom;
	NSMutableDictionary* _pendingCertificates;
	NSDictionary* _pluginUpgradeInfo;

}

@property (nonatomic,retain) NSDictionary * payloadAtom;                   //@synthesize payloadAtom=_payloadAtom - In the implementation block
@property (retain) NSMutableDictionary * pendingCertificates;              //@synthesize pendingCertificates=_pendingCertificates - In the implementation block
@property (retain) NSDictionary * pluginUpgradeInfo;                       //@synthesize pluginUpgradeInfo=_pluginUpgradeInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(id)validatePayload;
-(NSDictionary *)payloadAtom;
-(NSDictionary *)pluginUpgradeInfo;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 accessGroup:(id)arg3 ;
-(BOOL)addCertificatePending:(id)arg1 certificateTag:(id)arg2 ;
-(NSMutableDictionary *)pendingCertificates;
-(id)getPreprocessedPayloadContents;
-(void)setPluginUpgradeInfo:(NSDictionary *)arg1 ;
-(void)setPayloadAtom:(NSDictionary *)arg1 ;
-(void)setPendingCertificates:(NSMutableDictionary *)arg1 ;
-(BOOL)setPostprocessedPayloadContents:(id)arg1 ;
@end

