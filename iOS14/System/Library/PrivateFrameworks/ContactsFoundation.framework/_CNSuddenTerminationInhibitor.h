/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/CNInhibitor.h>

@class NSProcessInfo;

@interface _CNSuddenTerminationInhibitor : CNInhibitor {

	NSProcessInfo* _processInfo;

}

@property (nonatomic,retain) NSProcessInfo * processInfo;              //@synthesize processInfo=_processInfo - In the implementation block
-(NSProcessInfo *)processInfo;
-(id)init;
-(void)start;
-(void)setProcessInfo:(NSProcessInfo *)arg1 ;
-(void)stop;
-(id)initWithProcessInfo:(id)arg1 ;
@end

