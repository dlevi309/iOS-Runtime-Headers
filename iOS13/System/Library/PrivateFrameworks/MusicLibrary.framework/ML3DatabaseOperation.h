/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <Foundation/NSOperation.h>

@class ML3MediaLibraryWriter, ML3ActiveTransaction, ML3MusicLibrary, ML3Client, NSDictionary, NSError;

@interface ML3DatabaseOperation : NSOperation {

	ML3MediaLibraryWriter* _writer;
	ML3ActiveTransaction* _transaction;
	BOOL _beganNewTransaction;
	BOOL _success;
	unsigned long long _type;
	ML3MusicLibrary* _library;
	ML3Client* _originatingClient;
	NSDictionary* _options;
	NSDictionary* _attributes;
	NSError* _error;

}

@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * library;                       //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) ML3Client * originatingClient;                     //@synthesize originatingClient=_originatingClient - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                           //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) ML3ActiveTransaction * transaction; 
@property (nonatomic,readonly) BOOL success;                                    //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
+(id)databaseOperationForType:(unsigned long long)arg1 withLibrary:(id)arg2 writer:(id)arg3 ;
-(id)description;
-(NSDictionary *)options;
-(unsigned long long)type;
-(NSError *)error;
-(NSDictionary *)attributes;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)success;
-(ML3ActiveTransaction *)transaction;
-(void)setSuccess:(BOOL)arg1 ;
-(ML3MusicLibrary *)library;
-(BOOL)_execute:(id*)arg1 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(id)initWithLibrary:(id)arg1 writer:(id)arg2 ;
-(void)setOriginatingClient:(ML3Client *)arg1 ;
-(ML3Client *)originatingClient;
-(id)_operationTypeDescription;
@end

