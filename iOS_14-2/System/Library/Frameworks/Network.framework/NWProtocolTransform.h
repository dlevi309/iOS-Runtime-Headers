/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)tfo;
-(BOOL)noProxy;
-(int)dataMode;
-(void)setFastOpenForceEnable:(BOOL)arg1 ;
-(id)privateDescription;
-(id)init;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(id)description;
-(void)setTfo:(BOOL)arg1 ;
-(unsigned long long)fallbackMode;
-(id)initWithCTransform:(id)arg1 ;
-(void)disableProtocol:(nw_protocol_identifier*)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg1 ;
-(void)appendProtocol:(id)arg1 atLevel:(int)arg2 ;
-(NWEndpoint *)replacementEndpoint;
-(void)setReplacementEndpoint:(NWEndpoint *)arg1 ;
-(void)setFallbackMode:(unsigned long long)arg1 ;
-(BOOL)prohibitDirect;
-(void)setProhibitDirect:(BOOL)arg1 ;
-(BOOL)tfoNoCookie;
-(void)setTfoNoCookie:(BOOL)arg1 ;
-(BOOL)disablePathFallback;
-(void)setDisablePathFallback:(BOOL)arg1 ;
-(NSObject*<OS_nw_protocol_transform>)internalTransform;
-(void)setInternalTransform:(NSObject*<OS_nw_protocol_transform>)arg1 ;
-(unsigned long long)hash;
-(void)setDataMode:(int)arg1 ;
-(BOOL)fastOpenForceEnable;
-(void)setMultipathService:(int)arg1 ;
-(void)setNoProxy:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)multipathService;
@end

