/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

