/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCount:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)context;
-(void)setContext:(id)arg1 ;
-(NSDate *)firstOccurrence;
-(BOOL)shouldJettison:(id*)arg1 ;
@end

