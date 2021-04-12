/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDSuggestManagerInterface : NSObject
+(void)initialize;
+(id)xpcInterface;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(objc_method_description*)arg1 count:(unsigned)arg2 interface:(id)arg3 ;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2 ;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
@end

