/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/_ML3DatabaseConnectionPoolDiagnostic.h>

@class NSArray;

@interface _ML3MutableDatabaseConnectionPoolDiagnostic : _ML3DatabaseConnectionPoolDiagnostic

@property (nonatomic,copy) NSArray * readerAvailableConnections; 
@property (nonatomic,copy) NSArray * readerBusyConnections; 
@property (nonatomic,copy) NSArray * writerAvailableConnections; 
@property (nonatomic,copy) NSArray * writerBusyConnections; 
-(void)setReaderAvailableConnections:(NSArray *)arg1 ;
-(void)setReaderBusyConnections:(NSArray *)arg1 ;
-(void)setWriterAvailableConnections:(NSArray *)arg1 ;
-(void)setWriterBusyConnections:(NSArray *)arg1 ;
@end

