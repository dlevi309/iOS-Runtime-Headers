/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/

#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_path_flow;
@class NSObject, NWInterface, NWEndpoint, NSUUID;

@interface NWPathFlow : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_path_flow> _internalPathFlow;

}

@property (readonly) NSObject*<OS_nw_path_flow> internalPathFlow;              //@synthesize internalPathFlow=_internalPathFlow - In the implementation block
@property (nonatomic,readonly) NWInterface * interface; 
@property (nonatomic,readonly) NWEndpoint * localEndpoint; 
@property (nonatomic,readonly) NWEndpoint * remoteEndpoint; 
@property (nonatomic,readonly) NSUUID * flowID; 
@property (nonatomic,readonly) NSUUID * nexusAgent; 
@property (nonatomic,readonly) NSUUID * nexusInstance; 
@property (nonatomic,readonly) unsigned nexusPort; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (getter=isAssigned,nonatomic,readonly) BOOL assigned; 
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
@property (getter=isDirect,nonatomic,readonly) BOOL direct; 
@property (getter=isDefunct,nonatomic,readonly) BOOL defunct; 
@property (nonatomic,readonly) BOOL supportsIPv4; 
@property (nonatomic,readonly) BOOL supportsIPv6; 
-(BOOL)supportsIPv6;
-(BOOL)isLocal;
-(BOOL)supportsIPv4;
-(BOOL)isDirect;
-(id)privateDescription;
-(NSUUID *)flowID;
-(NSUUID *)nexusInstance;
-(unsigned)nexusPort;
-(NWInterface *)interface;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)isViable;
-(id)description;
-(id)initWithPathFlow:(id)arg1 ;
-(NSUUID *)nexusAgent;
-(BOOL)isAssigned;
-(NSObject*<OS_nw_path_flow>)internalPathFlow;
-(NWEndpoint *)localEndpoint;
-(NWEndpoint *)remoteEndpoint;
-(BOOL)isDefunct;
@end

