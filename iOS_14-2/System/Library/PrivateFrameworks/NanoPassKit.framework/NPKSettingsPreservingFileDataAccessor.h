/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateSettings:(unsigned long long)arg1 ;
-(NPKCompanionAgentConnection *)connection;
-(NSString *)objectUniqueID;
-(void)setConnection:(NPKCompanionAgentConnection *)arg1 ;
-(void)setObjectUniqueID:(NSString *)arg1 ;
@end

