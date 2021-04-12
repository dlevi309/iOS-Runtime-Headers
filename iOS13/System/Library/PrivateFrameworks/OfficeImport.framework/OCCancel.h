/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TCCancelDelegate.h>

@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {

	BOOL mIsCancelled;
	BOOL mIsQuit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(void)quit;
-(BOOL)isQuit;
@end

