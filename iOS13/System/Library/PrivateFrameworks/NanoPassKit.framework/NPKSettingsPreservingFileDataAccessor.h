/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <PassKitCore/PKFileDataAccessor.h>

@class NPKCompanionAgentConnection, NSString;

@interface NPKSettingsPreservingFileDataAccessor : PKFileDataAccessor {

	NPKCompanionAgentConnection* _connection;
	NSString* _objectUniqueID;

}

@property (nonatomic,retain) NPKCompanionAgentConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSString * objectUniqueID;                             //@synthesize objectUniqueID=_objectUniqueID - In the implementation block
-(NPKCompanionAgentConnection *)connection;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)updateSettings:(unsigned long long)arg1 ;
-(NSString *)objectUniqueID;
-(void)setObjectUniqueID:(NSString *)arg1 ;
@end

