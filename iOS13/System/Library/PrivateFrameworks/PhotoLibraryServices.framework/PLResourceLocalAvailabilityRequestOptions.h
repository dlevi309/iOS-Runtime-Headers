/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLResourceLocalAvailabilityRequestOptions : NSObject {

	BOOL _networkAccessAllowed;
	BOOL _shouldPrioritize;
	BOOL _transient;
	NSString* _taskIdentifier;
	/*^block*/id _progressHandler;
	/*^block*/id _dataHandler;

}

@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (assign,nonatomic) BOOL shouldPrioritize;                                                //@synthesize shouldPrioritize=_shouldPrioritize - In the implementation block
@property (nonatomic,copy) NSString * taskIdentifier;                                              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
@property (assign,getter=isTransient,nonatomic) BOOL transient;                                    //@synthesize transient=_transient - In the implementation block
@property (nonatomic,copy) id dataHandler;                                                         //@synthesize dataHandler=_dataHandler - In the implementation block
-(NSString *)taskIdentifier;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)isTransient;
-(void)setTransient:(BOOL)arg1 ;
-(id)dataHandler;
-(void)setDataHandler:(id)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)shouldPrioritize;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(void)setShouldPrioritize:(BOOL)arg1 ;
@end

