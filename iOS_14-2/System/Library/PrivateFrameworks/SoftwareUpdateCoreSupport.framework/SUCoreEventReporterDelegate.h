/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SUCoreEventReporter *)reporter;
-(void)setReporter:(SUCoreEventReporter *)arg1 ;
-(id)initWithReporter:(id)arg1 ;
@end

