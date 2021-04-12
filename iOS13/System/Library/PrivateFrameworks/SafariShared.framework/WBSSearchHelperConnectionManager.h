/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject {

	NSMutableSet* _clients;
	NSXPCConnection* _searchHelperConnection;

}

@property (nonatomic,retain) NSXPCConnection * searchHelperConnection;              //@synthesize searchHelperConnection=_searchHelperConnection - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)removeClient:(id)arg1 ;
-(id)searchHelperConnectionRequestedByClient:(id)arg1 ;
-(void)setSearchHelperConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)searchHelperConnection;
@end

