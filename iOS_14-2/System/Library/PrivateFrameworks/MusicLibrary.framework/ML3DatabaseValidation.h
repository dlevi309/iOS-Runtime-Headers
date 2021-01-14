/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@protocol ML3DatabaseValidationDelegate;
@class ML3MusicLibrary;

@interface ML3DatabaseValidation : NSObject {

	BOOL _truncateBeforeValidating;
	ML3MusicLibrary* _library;
	id<ML3DatabaseValidationDelegate> _delegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                                    //@synthesize library=_library - In the implementation block
@property (assign,nonatomic,__weak) id<ML3DatabaseValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL truncateBeforeValidating;                                  //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
-(ML3MusicLibrary *)library;
-(BOOL)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id<ML3DatabaseValidationDelegate>)delegate;
-(id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)completionHandler;
-(BOOL)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(BOOL)truncateBeforeValidating;
-(void)setDelegate:(id<ML3DatabaseValidationDelegate>)arg1 ;
-(void)setTruncateBeforeValidating:(BOOL)arg1 ;
-(BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
-(BOOL)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(void)runValidation;
-(BOOL)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
@end

