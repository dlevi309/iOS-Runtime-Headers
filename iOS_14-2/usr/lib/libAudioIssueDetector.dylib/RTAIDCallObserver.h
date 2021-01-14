/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(CXCallObserver *)callObserver;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(void)setCallReporterBlock:(id)arg1 ;
-(id)initWithCallReporterBlock:(/*^block*/id)arg1 ;
-(id)callReporterBlock;
@end

