/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMIPCore.framework/FMIPCore
*/

#import <Foundation/NSOperation.h>

@interface FMIPCore.FMIPReverseGeocodingOperation : NSOperation {

	 request;
	 completion;
	 _isFinished;

}

@property (assign,nonatomic) BOOL finished; 
@property (readonly,nonatomic) BOOL asynchronous; 
-(id)init;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setFinished:(BOOL)arg1 ;
-(void)main;
@end

