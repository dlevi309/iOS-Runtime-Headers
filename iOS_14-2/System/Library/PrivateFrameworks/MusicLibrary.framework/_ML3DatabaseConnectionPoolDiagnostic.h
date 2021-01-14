/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)_copyWithZone:(NSZone*)arg1 usingConcreteClass:(Class)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)readerAvailableConnections;
-(NSArray *)readerBusyConnections;
-(NSArray *)writerAvailableConnections;
-(NSArray *)writerBusyConnections;
@end

