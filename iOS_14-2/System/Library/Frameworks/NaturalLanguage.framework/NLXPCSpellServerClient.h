/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isValid;
-(void)sendCommand:(id)arg1 ;
-(id)connection;
-(id)serverName;
-(void)dealloc;
-(id)initWithServerName:(id)arg1 ;
@end

