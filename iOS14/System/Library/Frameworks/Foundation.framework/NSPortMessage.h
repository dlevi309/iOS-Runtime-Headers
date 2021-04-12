/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSPort, NSMutableArray, NSArray;

@interface NSPortMessage : NSObject {

	NSPort* localPort;
	NSPort* remotePort;
	NSMutableArray* components;
	unsigned msgid;
	void* reserved2;
	void* reserved;

}

@property (copy,readonly) NSArray * components; 
@property (retain,readonly) NSPort * receivePort; 
@property (retain,readonly) NSPort * sendPort; 
@property (assign) unsigned msgid; 
-(unsigned)msgid;
-(NSPort *)sendPort;
-(void)setMsgid:(unsigned)arg1 ;
-(id)initWithSendPort:(id)arg1 receivePort:(id)arg2 components:(id)arg3 ;
-(id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3 ;
-(NSPort *)receivePort;
-(NSArray *)components;
-(BOOL)sendBeforeDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

