/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PXPeopleSuggestionManagerDataSource.h>

@class NSArray, PHFetchResult, NSString;

@interface PXPeopleSuggestionDataSource : NSObject <PHPhotoLibraryChangeObserver, PXPeopleSuggestionManagerDataSource> {

	unsigned long long _initialPageLimit;
	unsigned long long _suggestionFetchType;
	unsigned long long _flowType;
	NSArray* _mergeCandidates;
	PHFetchResult* _mergeCandidateFetchResult;

}

@property (nonatomic,copy) NSArray * mergeCandidates;                              //@synthesize mergeCandidates=_mergeCandidates - In the implementation block
@property (nonatomic,copy) PHFetchResult * mergeCandidateFetchResult;              //@synthesize mergeCandidateFetchResult=_mergeCandidateFetchResult - In the implementation block
@property (assign,nonatomic) unsigned long long initialPageLimit;                  //@synthesize initialPageLimit=_initialPageLimit - In the implementation block
@property (assign,nonatomic) unsigned long long suggestionFetchType;               //@synthesize suggestionFetchType=_suggestionFetchType - In the implementation block
@property (assign,nonatomic) unsigned long long flowType;                          //@synthesize flowType=_flowType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)mergeCandidates;
-(void)setMergeCandidates:(NSArray *)arg1 ;
-(void)setFlowType:(unsigned long long)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)startListeningForLibraryChanges;
-(void)stopListeningForLibraryChanges;
-(unsigned long long)initialPageLimit;
-(void)setInitialPageLimit:(unsigned long long)arg1 ;
-(BOOL)cancelSuggestionForPerson:(id)arg1 withToken:(id)arg2 error:(id*)arg3 ;
-(id)initWithFlowType:(unsigned long long)arg1 ;
-(id)suggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)commitSuggestionsForPerson:(id)arg1 withConfirmedSuggestions:(id)arg2 andRejectedSuggestions:(id)arg3 ;
-(id)fetchAndCacheMergeCandidatesForPerson:(id)arg1 ;
-(unsigned long long)suggestionFetchType;
-(void)setSuggestionFetchType:(unsigned long long)arg1 ;
-(PHFetchResult *)mergeCandidateFetchResult;
-(void)setMergeCandidateFetchResult:(PHFetchResult *)arg1 ;
-(unsigned long long)flowType;
@end

