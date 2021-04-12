/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSPortNameServer : NSObject
+(id)systemDefaultPortNameServer;
+(id)defaultPortNameServer;
-(BOOL)registerPort:(id)arg1 name:(id)arg2 ;
-(id)portForName:(id)arg1 host:(id)arg2 ;
-(id)portForName:(id)arg1 ;
-(BOOL)removePortForName:(id)arg1 ;
-(BOOL)registerPort:(id)arg1 forName:(id)arg2 ;
-(id)portForName:(id)arg1 onHost:(id)arg2 ;
@end

