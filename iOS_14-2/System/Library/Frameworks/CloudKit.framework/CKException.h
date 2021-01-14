/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CoreFoundation/NSException.h>

@interface CKException : NSException

@property (nonatomic,readonly) int errorCode; 
-(int)errorCode;
-(id)error;
-(id)initWithName:(id)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 ;
-(id)initWithCode:(int)arg1 format:(id)arg2 args:(char*)arg3 ;
-(id)initWithName:(id)arg1 format:(id)arg2 args:(char*)arg3 ;
@end

