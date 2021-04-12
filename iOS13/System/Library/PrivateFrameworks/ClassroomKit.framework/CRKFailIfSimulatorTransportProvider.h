/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKTransportProviding.h>

@protocol CRKTransportProviding;
@class NSError, NSString;

@interface CRKFailIfSimulatorTransportProvider : NSObject <CRKTransportProviding> {

	id<CRKTransportProviding> _baseProvider;
	NSError* _failureError;

}

@property (nonatomic,readonly) id<CRKTransportProviding> baseProvider;              //@synthesize baseProvider=_baseProvider - In the implementation block
@property (nonatomic,readonly) NSError * failureError;                              //@synthesize failureError=_failureError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)failureError;
-(id)initWithTransportProvider:(id)arg1 failureError:(id)arg2 ;
-(id<CRKTransportProviding>)baseProvider;
-(void)fetchTransportWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithTransportProvider:(id)arg1 ;
@end
