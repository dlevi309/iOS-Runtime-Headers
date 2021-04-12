/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKLEventFilter, NSDateFormatter, NSMutableDictionary, NSString;

@interface CKLStreamObserver : NSObject {

	BOOL _colorOutput;
	CKLEventFilter* _filter;
	NSDateFormatter* _formatter;
	NSMutableDictionary* _processNamesByPath;

}

@property (nonatomic,retain) CKLEventFilter * filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSDateFormatter * formatter;                         //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * processNamesByPath;              //@synthesize processNamesByPath=_processNamesByPath - In the implementation block
@property (assign,nonatomic) BOOL simulatorOnly; 
@property (assign,nonatomic) BOOL colorOutput;                                      //@synthesize colorOutput=_colorOutput - In the implementation block
@property (nonatomic,retain) NSString * processName; 
-(NSDateFormatter *)formatter;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(void)finish;
-(void)setFilter:(CKLEventFilter *)arg1 ;
-(CKLEventFilter *)filter;
-(void)_handleEvent:(id)arg1 ;
-(id)initWithLogTypes:(unsigned long long)arg1 ;
-(void)eventMatched:(id)arg1 ;
-(NSMutableDictionary *)processNamesByPath;
-(void)setSimulatorOnly:(BOOL)arg1 ;
-(BOOL)simulatorOnly;
-(id)_processNameForPath:(id)arg1 ;
-(BOOL)colorOutput;
-(void)setColorOutput:(BOOL)arg1 ;
-(void)setProcessNamesByPath:(NSMutableDictionary *)arg1 ;
@end

