/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject {

	CUTWeakReference* _contextWeakReference;
	NSDate* _firstOccurrence;
	unsigned long long _count;

}

@property (assign,nonatomic,__weak) id context; 
@property (readonly) NSDate * firstOccurrence;                      //@synthesize firstOccurrence=_firstOccurrence - In the implementation block
@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)setCount:(unsigned long long)arg1 ;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSDate *)firstOccurrence;
-(BOOL)shouldJettison:(id*)arg1 ;
@end

