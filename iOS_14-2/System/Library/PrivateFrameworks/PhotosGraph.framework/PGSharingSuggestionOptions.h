/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@interface PGSharingSuggestionOptions : NSObject {

	BOOL _replaceMergeCandidates;
	BOOL _debugMode;
	BOOL _includeUnverified;
	BOOL _filterLowWeightResults;
	BOOL _useContactSuggestion;
	unsigned long long _sharingStream;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long sharingStream;              //@synthesize sharingStream=_sharingStream - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                 //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL includeUnverified;                        //@synthesize includeUnverified=_includeUnverified - In the implementation block
@property (assign,nonatomic) BOOL replaceMergeCandidates;                   //@synthesize replaceMergeCandidates=_replaceMergeCandidates - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                                //@synthesize debugMode=_debugMode - In the implementation block
@property (assign,nonatomic) BOOL filterLowWeightResults;                   //@synthesize filterLowWeightResults=_filterLowWeightResults - In the implementation block
@property (assign,nonatomic) BOOL useContactSuggestion;                     //@synthesize useContactSuggestion=_useContactSuggestion - In the implementation block
+(id)optionsForClient:(unsigned long long)arg1 ;
+(unsigned long long)_shareSheetSharingStream;
-(unsigned long long)fetchLimit;
-(id)init;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(BOOL)debugMode;
-(unsigned long long)sharingStream;
-(id)description;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)useContactSuggestion;
-(void)setUseContactSuggestion:(BOOL)arg1 ;
-(BOOL)replaceMergeCandidates;
-(void)setReplaceMergeCandidates:(BOOL)arg1 ;
-(BOOL)includeUnverified;
-(void)setIncludeUnverified:(BOOL)arg1 ;
-(BOOL)filterLowWeightResults;
-(void)setFilterLowWeightResults:(BOOL)arg1 ;
@end

