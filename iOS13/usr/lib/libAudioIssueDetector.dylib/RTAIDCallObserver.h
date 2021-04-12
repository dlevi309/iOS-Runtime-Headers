/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface RTAIDCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;
	/*^block*/id _callReporterBlock;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,copy) id callReporterBlock;                         //@synthesize callReporterBlock=_callReporterBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(id)initWithCallReporterBlock:(/*^block*/id)arg1 ;
-(id)callReporterBlock;
-(void)setCallReporterBlock:(id)arg1 ;
@end

