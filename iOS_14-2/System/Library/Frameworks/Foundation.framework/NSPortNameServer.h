/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSPortNameServer : NSObject
+(id)systemDefaultPortNameServer;
+(id)defaultPortNameServer;
-(id)portForName:(id)arg1 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(BOOL)registerPort:(id)arg1 forName:(id)arg2 ;
-(id)portForName:(id)arg1 onHost:(id)arg2 ;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(BOOL)removePortForName:(id)arg1 ;
@end

