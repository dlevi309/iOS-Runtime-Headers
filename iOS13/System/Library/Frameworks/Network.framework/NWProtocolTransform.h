/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_protocol_transform;
@class NSObject, NWEndpoint;

@interface NWProtocolTransform : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_protocol_transform> _internalTransform;

}

@property (retain) NSObject*<OS_nw_protocol_transform> internalTransform;              //@synthesize internalTransform=_internalTransform - In the implementation block
@property (assign,nonatomic) BOOL noProxy; 
@property (assign,nonatomic) int multipathService; 
@property (nonatomic,copy) NWEndpoint * replacementEndpoint; 
@property (assign,nonatomic) BOOL tfo; 
@property (assign,nonatomic) BOOL tfoNoCookie; 
@property (assign,nonatomic) int dataMode; 
@property (assign,nonatomic) unsigned long long fallbackMode; 
@property (assign,nonatomic) BOOL prohibitDirect; 
@property (assign,nonatomic) BOOL disablePathFallback; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)tfo;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)privateDescription;
-(int)dataMode;
-(void)setDataMode:(int)arg1 ;
-(void)setMultipathService:(int)arg1 ;
-(int)multipathService;
-(BOOL)fastOpenForceEnable;
-(void)setFastOpenForceEnable:(BOOL)arg1 ;
-(BOOL)noProxy;
-(void)setNoProxy:(BOOL)arg1 ;
-(id)initWithCTransform:(id)arg1 ;
-(void)disableProtocol:(nw_protocol_identifier*)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg1 ;
-(void)appendProtocol:(id)arg1 atLevel:(int)arg2 ;
-(NWEndpoint *)replacementEndpoint;
-(void)setReplacementEndpoint:(NWEndpoint *)arg1 ;
-(unsigned long long)fallbackMode;
-(void)setFallbackMode:(unsigned long long)arg1 ;
-(BOOL)prohibitDirect;
-(void)setProhibitDirect:(BOOL)arg1 ;
-(void)setTfo:(BOOL)arg1 ;
-(BOOL)tfoNoCookie;
-(void)setTfoNoCookie:(BOOL)arg1 ;
-(BOOL)disablePathFallback;
-(void)setDisablePathFallback:(BOOL)arg1 ;
-(NSObject*<OS_nw_protocol_transform>)internalTransform;
-(void)setInternalTransform:(NSObject*<OS_nw_protocol_transform>)arg1 ;
@end

