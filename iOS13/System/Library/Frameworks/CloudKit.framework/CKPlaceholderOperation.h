/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSObject, NSString, NSDate;

@interface CKPlaceholderOperation : NSOperation {

	NSObject*<OS_dispatch_group> _group;
	BOOL _isFinished;
	BOOL _isExecuting;
	BOOL _finishInvoked;
	NSString* _sectionID;
	id _context;
	NSDate* _startDate;
	NSString* _operationID;
	/*^block*/id _daemonInvokeBlock;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                  //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) id context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * operationID;              //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,readonly) id daemonInvokeBlock;                //@synthesize daemonInvokeBlock=_daemonInvokeBlock - In the implementation block
@property (assign,nonatomic) BOOL finishInvoked;                    //@synthesize finishInvoked=_finishInvoked - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                      //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                       //@synthesize isFinished=_isFinished - In the implementation block
-(id)description;
-(void)start;
-(void)main;
-(NSDate *)startDate;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(id)context;
-(void)finish;
-(void)setContext:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(NSString *)sectionID;
-(void)setSectionID:(NSString *)arg1 ;
-(NSString *)operationID;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(void)_setIsFinished:(BOOL)arg1 ;
-(id)initWithOperation:(id)arg1 daemonInvocationBlock:(/*^block*/id)arg2 ;
-(id)daemonInvokeBlock;
-(BOOL)finishInvoked;
-(void)setFinishInvoked:(BOOL)arg1 ;
@end

