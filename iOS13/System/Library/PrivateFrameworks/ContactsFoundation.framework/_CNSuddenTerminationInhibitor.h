/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor {

	NSProcessInfo* _processInfo;

}

@property (nonatomic,retain) NSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(id)init;
-(void)stop;
-(NSProcessInfo *)processInfo;
-(void)start;
-(id)initWithProcessInfo:(id)arg1 ;
-(void)setProcessInfo:(NSProcessInfo *)arg1 ;
@end

