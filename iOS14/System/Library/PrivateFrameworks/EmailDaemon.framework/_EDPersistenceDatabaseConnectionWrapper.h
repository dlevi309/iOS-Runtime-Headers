/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)generation;
-(void)setResource:(EFResource *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(EFResource *)resource;
-(EDPersistenceDatabaseConnection *)connection;
-(unsigned long long)type;
-(id)initWithConnection:(id)arg1 generation:(unsigned long long)arg2 ;
@end

