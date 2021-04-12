/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Security.framework/Security
*/


@class NSString, NSXPCConnection;

@interface SFBehavior : NSObject {

	NSString* _family;
	NSXPCConnection* _connection;

}

@property (retain) NSString * family;                         //@synthesize family=_family - In the implementation block
@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)behaviorFamily:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initBehaviorFamily:(id)arg1 connection:(id)arg2 ;
-(unsigned)ramping:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)feature:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)featureEnabled:(id)arg1 ;
-(BOOL)featureDisabled:(id)arg1 ;
-(id)configurationNumber:(id)arg1 defaultValue:(id)arg2 ;
-(id)configurationString:(id)arg1 defaultValue:(id)arg2 ;
-(NSString *)family;
-(void)setFamily:(NSString *)arg1 ;
@end

