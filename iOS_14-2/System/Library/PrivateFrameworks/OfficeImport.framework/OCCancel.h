/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)quit;
-(id)init;
-(BOOL)isQuit;
-(void)cancel;
-(BOOL)isCancelled;
@end

