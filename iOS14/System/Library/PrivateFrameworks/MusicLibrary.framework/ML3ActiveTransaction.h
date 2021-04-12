/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/NSLocking.h>

@class ML3DatabaseConnection, NSLock, MSVXPCTransaction, ML3MusicLibrary, NSUUID, ML3Client;

@interface ML3ActiveTransaction : NSObject <NSLocking> {

	ML3DatabaseConnection* _connection;
	NSLock* _lock;
	MSVXPCTransaction* _xpcTransaction;
	BOOL _terminable;
	BOOL _inUseByOperation;
	BOOL _readOnly;
	ML3MusicLibrary* _library;
	NSUUID* _identifier;
	ML3Client* _client;
	double _lastUsedTime;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) ML3DatabaseConnection * connection; 
@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) ML3Client * client;                              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) double lastUsedTime;                               //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (assign,nonatomic) BOOL terminable;                                   //@synthesize terminable=_terminable - In the implementation block
@property (assign,nonatomic) BOOL inUseByOperation;                             //@synthesize inUseByOperation=_inUseByOperation - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                   //@synthesize readOnly=_readOnly - In the implementation block
-(ML3MusicLibrary *)library;
-(void)unlock;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(ML3Client *)client;
-(id)init;
-(void)lock;
-(double)lastUsedTime;
-(BOOL)inUseByOperation;
-(id)description;
-(ML3DatabaseConnection *)connection;
-(id)_relinquishConnection;
-(void)setInUseByOperation:(BOOL)arg1 ;
-(void)setTerminable:(BOOL)arg1 ;
-(BOOL)terminable;
-(void)updateLastUsed;
-(NSUUID *)identifier;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3 ;
-(void)setLastUsedTime:(double)arg1 ;
@end

