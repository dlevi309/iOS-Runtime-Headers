/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class PFHistoryAnalyzerOptions;

@interface PFHistoryAnalyzer : NSObject {

	PFHistoryAnalyzerOptions* _options;

}

@property (nonatomic,copy,readonly) PFHistoryAnalyzerOptions * options;              //@synthesize options=_options - In the implementation block
-(id)initWithOptions:(id)arg1 ;
-(BOOL)processTransaction:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(id)instantiateNewAnalyzerContextForChangesInStore:(id)arg1 ;
-(id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id*)arg4 ;
-(PFHistoryAnalyzerOptions *)options;
-(void)dealloc;
@end

