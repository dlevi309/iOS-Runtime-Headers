/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)main;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isAsynchronous;
@end

