/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class SUCoreEventReporter, NSString;

@interface SUCoreEventReporterDelegate : NSObject <NSURLSessionDelegate> {

	SUCoreEventReporter* _reporter;

}

@property (assign,nonatomic,__weak) SUCoreEventReporter * reporter;              //@synthesize reporter=_reporter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)initWithReporter:(id)arg1 ;
-(SUCoreEventReporter *)reporter;
-(void)setReporter:(SUCoreEventReporter *)arg1 ;
@end

