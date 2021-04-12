/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@interface SGDSuggestManagerInterface : NSObject
+(void)initialize;
+(id)xpcInterface;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg1 interface:(id)arg2 ;
+(id)xpcInterfaceForProtocol:(id)arg1 ;
+(void)_registerWhitelistBlock:(/*^block*/id)arg1 forProtocol:(id)arg2 ;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(objc_method_description*)arg1 count:(unsigned)arg2 interface:(id)arg3 ;
+(void)_whitelistXPCInterface:(id)arg1 forProtocol:(id)arg2 alreadyWhitelisted:(id)arg3 ;
+(void)interface:(id)arg1 returnsArrayOf:(Class)arg2 forSelector:(SEL)arg3 ;
+(void)interface:(id)arg1 returns:(Class)arg2 forSelector:(SEL)arg3 ;
+(id)realtimeSuggestionsClasses;
@end

