/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSPersistentHistoryToken;

@interface STHistoryAnalyzer : NSObject {

	NSPersistentHistoryToken* _finalToken;

}

@property (nonatomic,readonly) NSPersistentHistoryToken * finalToken;              //@synthesize finalToken=_finalToken - In the implementation block
-(BOOL)_isChangeInteresting:(id)arg1 ;
-(id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 error:(id*)arg6 ;
-(NSPersistentHistoryToken *)finalToken;
@end

