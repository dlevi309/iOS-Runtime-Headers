/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSString * sectionID;                     //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,retain) id context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * operationID;                 //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,copy,readonly) id daemonInvokeBlock;              //@synthesize daemonInvokeBlock=_daemonInvokeBlock - In the implementation block
@property (assign,nonatomic) BOOL finishInvoked;                       //@synthesize finishInvoked=_finishInvoked - In the implementation block
@property (assign,nonatomic) BOOL isExecuting;                         //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) BOOL isFinished;                          //@synthesize isFinished=_isFinished - In the implementation block
-(void)setSectionID:(NSString *)arg1 ;
-(void)finish;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)daemonInvokeBlock;
-(NSString *)sectionID;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSString *)operationID;
-(void)start;
-(NSDate *)startDate;
-(id)context;
-(BOOL)isFinished;
-(void)_setIsFinished:(BOOL)arg1 ;
-(void)setFinishInvoked:(BOOL)arg1 ;
-(BOOL)finishInvoked;
-(id)description;
-(void)main;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)_setIsExecuting:(BOOL)arg1 ;
-(BOOL)isConcurrent;
-(void)setIsFinished:(BOOL)arg1 ;
-(id)initWithOperation:(id)arg1 daemonInvocationBlock:(/*^block*/id)arg2 ;
-(void)setContext:(id)arg1 ;
@end

