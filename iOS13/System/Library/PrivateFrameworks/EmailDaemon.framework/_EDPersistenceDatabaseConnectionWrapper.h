/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EFResource, EDPersistenceDatabaseConnection;

@interface _EDPersistenceDatabaseConnectionWrapper : NSObject {

	EFResource* _resource;
	EDPersistenceDatabaseConnection* _connection;
	unsigned long long _generation;
	unsigned long long _type;

}

@property (nonatomic,retain) EFResource * resource;                                       //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) EDPersistenceDatabaseConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                             //@synthesize generation=_generation - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                     //@synthesize type=_type - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(EDPersistenceDatabaseConnection *)connection;
-(unsigned long long)generation;
-(EFResource *)resource;
-(void)setResource:(EFResource *)arg1 ;
-(id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2 ;
@end

