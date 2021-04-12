/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
*/


@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {

	NSString* _serverName;
	NSXPCConnection* _connection;
	BOOL _invalidated;

}
+(id)spellServerClient;
+(void)requestAssetsForLanguage:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(id)connection;
-(void)sendCommand:(id)arg1 ;
-(id)initWithServerName:(id)arg1 ;
-(id)serverName;
@end

