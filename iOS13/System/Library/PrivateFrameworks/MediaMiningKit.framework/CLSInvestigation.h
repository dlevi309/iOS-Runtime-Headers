/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/


@protocol CLSInvestigationDelegate, CLSInvestigationInterviewDelegate;
#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSString, CLSInvestigationFeeder, NSMutableArray, CLSInspector, CLSClueCollection, NSArray, NSMutableDictionary;

@interface CLSInvestigation : NSObject {

	NSString* _uuid;
	id _context;
	CLSInvestigationFeeder* _feeder;
	id<CLSInvestigationDelegate> _delegate;
	id<CLSInvestigationInterviewDelegate> _interviewDelegate;
	NSMutableArray* _profiles;
	CLSInspector* _inspector;
	CLSClueCollection* _clueCollection;
	unsigned long long _precision;
	NSArray* _informants;
	NSMutableDictionary* _tracesLogsByURIs;
	NSMutableArray* _tracesLogsURIs;
	BOOL _enableDebuggingClues;
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateDidEnd : 1;
		unsigned delegateNumberOfItems : 1;
		unsigned delegateSampleOfItems : 1;
		unsigned delegateItemThumbnailAtIndexWithResolution : 1;
	}  _investigationFlags;

}

@property (nonatomic,retain,readonly) CLSInvestigationFeeder * feeder;                                    //@synthesize feeder=_feeder - In the implementation block
@property (assign) BOOL enableDebuggingClues;                                                             //@synthesize enableDebuggingClues=_enableDebuggingClues - In the implementation block
@property (nonatomic,copy,readonly) NSString * uuid;                                                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * profiles;                                                 //@synthesize profiles=_profiles - In the implementation block
@property (assign,nonatomic,__weak) id<CLSInvestigationDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<CLSInvestigationInterviewDelegate> interviewDelegate;              //@synthesize interviewDelegate=_interviewDelegate - In the implementation block
@property (nonatomic,retain) id context;                                                                  //@synthesize context=_context - In the implementation block
@property (retain,readonly) CLSClueCollection * clueCollection;                                           //@synthesize clueCollection=_clueCollection - In the implementation block
@property (nonatomic,__weak,readonly) CLSInspector * inspector;                                           //@synthesize inspector=_inspector - In the implementation block
@property (assign,nonatomic) unsigned long long precision;                                                //@synthesize precision=_precision - In the implementation block
+(id)investigationWithProfiles:(id)arg1 ;
+(id)investigationWithProfiles:(id)arg1 clueDates:(id)arg2 clueLocations:(id)arg3 cluePeoples:(id)arg4 ;
-(id)init;
-(id)description;
-(id<CLSInvestigationDelegate>)delegate;
-(void)setDelegate:(id<CLSInvestigationDelegate>)arg1 ;
-(NSString *)uuid;
-(id)context;
-(void)setContext:(id)arg1 ;
-(CLSInspector *)inspector;
-(unsigned long long)precision;
-(void)setPrecision:(unsigned long long)arg1 ;
-(unsigned long long)numberOfItems;
-(NSArray *)profiles;
-(CLSInvestigationFeeder *)feeder;
-(id)initWithProfiles:(id)arg1 ;
-(id)description:(BOOL)arg1 ;
-(id)itemThumbnailAtIndex:(unsigned long long)arg1 withResolution:(unsigned long long)arg2 ;
-(id)initWithClueCollection:(id)arg1 profiles:(id)arg2 ;
-(id)initWithFeeder:(id)arg1 profiles:(id)arg2 ;
-(void)setInterviewDelegate:(id<CLSInvestigationInterviewDelegate>)arg1 ;
-(void)_willBeginInvestigation:(id)arg1 ;
-(void)_didEndInvestigation:(BOOL)arg1 ;
-(id)sampleOfItems;
-(void)addTraceFromObject:(id)arg1 feature:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 withDescriptionFormat:(id)arg5 ;
-(id)_traceStringForType:(unsigned long long)arg1 ;
-(id)tracesDescription;
-(id<CLSInvestigationInterviewDelegate>)interviewDelegate;
-(CLSClueCollection *)clueCollection;
-(BOOL)enableDebuggingClues;
-(void)setEnableDebuggingClues:(BOOL)arg1 ;
@end

