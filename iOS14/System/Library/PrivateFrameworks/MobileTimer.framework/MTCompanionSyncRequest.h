/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTSyncToken.h>

@protocol NAScheduler;
@class NSError, NSMutableArray, NSString;

@interface MTCompanionSyncRequest : NSObject <MTSyncToken> {

	BOOL _completed;
	unsigned long long _requestType;
	NSError* _error;
	NSMutableArray* _completionBlocks;
	id<NAScheduler> _serializer;

}

@property (assign,nonatomic) unsigned long long requestType;                 //@synthesize requestType=_requestType - In the implementation block
@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                     //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithType:(unsigned long long)arg1 ;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)setRequestType:(unsigned long long)arg1 ;
-(NSMutableArray *)completionBlocks;
-(unsigned long long)requestType;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(id<NAScheduler>)serializer;
-(BOOL)completed;
-(void)setError:(NSError *)arg1 ;
-(id)requestDescription;
-(void)complete:(id)arg1 ;
-(NSError *)error;
-(NSString *)description;
-(void)setCompleted:(BOOL)arg1 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithRequestType:(unsigned long long)arg1 ;
@end

