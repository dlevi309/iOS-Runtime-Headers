/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSPortNameServer.h>

@interface NSMachBootstrapServer : NSPortNameServer
+(id)sharedInstance;
-(id)portForName:(id)arg1 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)servicePortWithName:(id)arg1 ;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(BOOL)removePortForName:(id)arg1 ;
@end

