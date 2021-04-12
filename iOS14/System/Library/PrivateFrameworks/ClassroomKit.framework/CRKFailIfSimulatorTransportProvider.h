/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

