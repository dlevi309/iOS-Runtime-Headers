/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@class NSError, NSString;

@interface CRKAlwaysFailingTransportProvider : NSObject <CRKTransportProviding> {

	NSError* mError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithError:(id)arg1 ;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
@end

