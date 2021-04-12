/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DDScannerServiceConfiguration : NSObject {

	int _scannerType;
	long long _resultsOptions;
	long long _scannerOptions;
	double _timeout;
	BOOL _noObjC;
	BOOL _spotlightSuggestionsEnabled;
	NSString* _recyclingIdentifier;
	long long* _jobIdentifierPtr;
	NSObject*<OS_dispatch_queue> _completionQueue;

}

@property (assign,nonatomic) BOOL noObjC;                                               //@synthesize noObjC=_noObjC - In the implementation block
@property (assign,nonatomic) BOOL spotlightSuggestionsEnabled; 
@property (assign,nonatomic) double timeout;                                            //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long resultsOptions;                                  //@synthesize resultsOptions=_resultsOptions - In the implementation block
@property (assign,nonatomic) long long scannerOptions;                                  //@synthesize scannerOptions=_scannerOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
-(id)init;
-(id)description;
-(id)copy;
-(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithScannerType:(int)arg1 passiveIntent:(BOOL)arg2 ;
-(void)setSpotlightSuggestionsEnabled:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(id)initEmpty;
-(void)updateRecyclingIdentifier;
-(id)recyclingIdentifier;
-(BOOL)spotlightSuggestionsEnabled;
-(int)scannerType;
-(long long)scannerOptions;
-(void)setScannerOptions:(long long)arg1 ;
-(long long)resultsOptions;
-(void)setResultsOptions:(long long)arg1 ;
-(BOOL)noObjC;
-(void)setNoObjC:(BOOL)arg1 ;
@end

