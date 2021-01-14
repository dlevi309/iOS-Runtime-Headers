/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/


@protocol OS_dispatch_queue, MSPJournaling;
@class NSString, NSFileHandle, NSObject, NSISO8601DateFormatter;

@interface MSPJournal : NSObject {

	NSString* _path;
	NSFileHandle* _writeHandle;
	NSObject*<OS_dispatch_queue> _writeQueue;
	NSISO8601DateFormatter* _dateFormatter;
	BOOL _analyticsEnabled;
	BOOL _loggingEnabled;
	BOOL _journalEnabled;
	NSString* _name;
	id<MSPJournaling> _delegate;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic,__weak) id<MSPJournaling> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)noteChangeWithState:(id)arg1 format:(id)arg2 ;
-(id<MSPJournaling>)delegate;
-(void)noteChangeWithState:(id)arg1 error:(id)arg2 ;
-(void)rotateLogIfNeeded;
-(id)filename;
-(void)appendToLog:(id)arg1 format:(id)arg2 ;
-(NSString *)path;
-(id)rotatedPath;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setDelegate:(id<MSPJournaling>)arg1 ;
-(void)sendTelemetryForState:(id)arg1 affectedObject:(id)arg2 ;
-(void)appendToJournal:(id)arg1 format:(id)arg2 ;
-(void)noteChangeWithState:(id)arg1 affectedObject:(id)arg2 ;
-(void)noteChangeWithState:(id)arg1 payload:(id)arg2 ;
-(void)dealloc;
-(void)noteChangeWithState:(id)arg1 ;
@end

