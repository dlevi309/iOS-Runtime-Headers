/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)server;
+(id)contextWithOptions:(id)arg1 ;
+(id)serverWithOptions:(id)arg1 ;
+(id)serverIfRunning;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_init;
-(BOOL)isSecure;
-(NSArray *)displays;
-(void)setSecure:(BOOL)arg1 ;
-(id)secureModeViolations;
-(void)addDisplay:(id)arg1 ;
-(void)removeDisplay:(id)arg1 ;
-(void)removeAllDisplays;
-(id)displayWithName:(id)arg1 ;
-(id)displayWithDisplayId:(unsigned)arg1 ;
-(id)displayWithUniqueId:(id)arg1 ;
-(void)_detectDisplays;
-(void)setRendererFlags:(unsigned)arg1 ;
-(unsigned)rendererFlags;
-(id)insecureProcessIds;
-(unsigned)clientPortOfContextId:(unsigned)arg1 ;
-(unsigned)taskNamePortOfContextId:(unsigned)arg1 ;
-(unsigned)contextIdHostingContextId:(unsigned)arg1 ;
-(BOOL)isMirroringEnabled;
-(void)setMirroringEnabled:(BOOL)arg1 ;
@end

