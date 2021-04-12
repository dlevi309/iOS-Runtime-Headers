/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSString;

@interface CRKFailIfMacAndUnenrolledStudentdTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> mBaseTransportProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTransportProvider:(id)arg1 ;
@end

