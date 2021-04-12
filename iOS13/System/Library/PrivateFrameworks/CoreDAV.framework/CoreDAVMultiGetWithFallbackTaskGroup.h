/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <CoreDAV/CoreDAVContainerMultiGetSubmittable.h>

@class CoreDAVContainerMultiGetTask, NSMutableSet, NSString, NSError, NSSet;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {

	BOOL _shouldIgnoreResponseErrors;
	BOOL _usingMultiGet;
	CoreDAVContainerMultiGetTask* _multiGetTask;
	/*^block*/id _getBlock;
	NSMutableSet* _urls;
	NSMutableSet* _parsedContents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,readonly) NSSet * missingURLs; 
@property (nonatomic,readonly) NSSet * deletedURLs; 
@property (nonatomic,readonly) NSSet * parsedContents; 
@property (assign,nonatomic) BOOL shouldIgnoreResponseErrors;                                 //@synthesize shouldIgnoreResponseErrors=_shouldIgnoreResponseErrors - In the implementation block
-(NSError *)error;
-(void)startTaskGroup;
-(id)initWithURLs:(id)arg1 multiGetBlock:(/*^block*/id)arg2 getBlock:(/*^block*/id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(void)setShouldIgnoreResponseErrors:(BOOL)arg1 ;
-(NSSet *)missingURLs;
-(NSSet *)deletedURLs;
-(NSSet *)parsedContents;
-(BOOL)shouldIgnoreResponseErrors;
-(void)_fetchOneItem;
-(void)_configureAndSubmitTask:(id)arg1 ;
-(void)_switchToSingleGetMode;
@end

