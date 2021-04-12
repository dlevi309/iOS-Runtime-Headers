/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(NSUUID *)identifier;
-(ML3Client *)client;
-(ML3DatabaseConnection *)connection;
-(void)setReadOnly:(BOOL)arg1 ;
-(double)lastUsedTime;
-(BOOL)isReadOnly;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 connection:(id)arg2 client:(id)arg3 ;
-(void)updateLastUsed;
-(id)_relinquishConnection;
-(void)setLastUsedTime:(double)arg1 ;
-(BOOL)terminable;
-(void)setTerminable:(BOOL)arg1 ;
-(BOOL)inUseByOperation;
-(void)setInUseByOperation:(BOOL)arg1 ;
@end

