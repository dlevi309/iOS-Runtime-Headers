/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
*/

#import <libobjc.A.dylib/ICFlowControl.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl> {

	/*^block*/id shouldBeCanceled;
	/*^block*/id reportProgress;

}

@property (nonatomic,copy) id shouldBeCanceled; 
@property (nonatomic,copy) id reportProgress; 
-(BOOL)ICShouldBeCanceled;
-(void)ICReportProgress:(float)arg1 ;
-(void)setShouldBeCanceled:(id)arg1 ;
-(void)setReportProgress:(id)arg1 ;
-(id)reportProgress;
-(id)shouldBeCanceled;
-(id)initWithCancel:(/*^block*/id)arg1 ;
-(id)initWithProgress:(/*^block*/id)arg1 ;
@end

