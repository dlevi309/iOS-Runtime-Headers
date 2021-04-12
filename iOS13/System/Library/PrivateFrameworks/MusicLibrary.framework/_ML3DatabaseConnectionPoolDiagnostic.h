/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray;

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying> {

	NSArray* _readerAvailableConnections;
	NSArray* _readerBusyConnections;
	NSArray* _writerAvailableConnections;
	NSArray* _writerBusyConnections;

}

@property (nonatomic,readonly) NSArray * readerAvailableConnections;              //@synthesize readerAvailableConnections=_readerAvailableConnections - In the implementation block
@property (nonatomic,readonly) NSArray * readerBusyConnections;                   //@synthesize readerBusyConnections=_readerBusyConnections - In the implementation block
@property (nonatomic,readonly) NSArray * writerAvailableConnections;              //@synthesize writerAvailableConnections=_writerAvailableConnections - In the implementation block
@property (nonatomic,readonly) NSArray * writerBusyConnections;                   //@synthesize writerBusyConnections=_writerBusyConnections - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(NSArray *)readerAvailableConnections;
-(NSArray *)readerBusyConnections;
-(NSArray *)writerAvailableConnections;
-(NSArray *)writerBusyConnections;
@end

