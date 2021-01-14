/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class NSString, NSPointerArray;

@interface IMStateCaptureRecentsBuffer : NSObject {

	NSString* _title;
	unsigned long long _maximumNumberOfTrackedObjects;
	unsigned long long _nextInsertionIndex;
	NSPointerArray* _trackedObjects;
	unsigned long long* _handles;

}

@property (assign,nonatomic) unsigned long long nextInsertionIndex;                           //@synthesize nextInsertionIndex=_nextInsertionIndex - In the implementation block
@property (nonatomic,retain) NSPointerArray * trackedObjects;                                 //@synthesize trackedObjects=_trackedObjects - In the implementation block
@property (assign,nonatomic) unsigned long long* handles;                                     //@synthesize handles=_handles - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNumberOfTrackedObjects;              //@synthesize maximumNumberOfTrackedObjects=_maximumNumberOfTrackedObjects - In the implementation block
-(void)setHandles:(unsigned long long*)arg1 ;
-(unsigned long long*)handles;
-(NSPointerArray *)trackedObjects;
-(void)promoteRecentObject:(id)arg1 ;
-(void)registerStateCaptureBlockWithQueue:(id)arg1 ;
-(id)initWithTitle:(id)arg1 maximumNumberOfTrackedObjects:(unsigned long long)arg2 queue:(id)arg3 ;
-(unsigned long long)maximumNumberOfTrackedObjects;
-(unsigned long long)nextInsertionIndex;
-(void)setNextInsertionIndex:(unsigned long long)arg1 ;
-(void)setTrackedObjects:(NSPointerArray *)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

