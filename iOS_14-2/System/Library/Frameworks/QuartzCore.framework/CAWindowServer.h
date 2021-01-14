/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray;

@interface CAWindowServer : NSObject {

	CAWindowServerImpl* _impl;
	BOOL _mirroringEnabled;

}

@property (readonly) NSArray * displays; 
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;              //@synthesize mirroringEnabled=_mirroringEnabled - In the implementation block
@property (assign) unsigned rendererFlags; 
@property (getter=isSecure) BOOL secure; 
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
+(id)server;
+(id)serverIfRunning;
+(void)stopServer;
+(id)serverWithOptions:(id)arg1 ;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
-(void)setMirroringEnabled:(BOOL)arg1 ;
-(BOOL)isMirroringEnabled;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(unsigned)rendererFlags;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(id)init;
-(NSArray *)displays;
-(void)removeAllDisplays;
-(id)description;
-(void)addDisplay:(id)arg1 ;
-(void)_detectDisplays;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(id)secureModeViolations;
-(id)displayWithName:(id)arg1 ;
-(void)setRendererFlags:(unsigned)arg1 ;
-(id)insecureProcessIds;
-(id)_init;
-(void)dealloc;
@end

