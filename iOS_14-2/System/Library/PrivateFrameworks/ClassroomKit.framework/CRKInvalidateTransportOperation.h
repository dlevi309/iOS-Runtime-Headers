/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATOperation.h>
#import <libobjc.A.dylib/CATTransportDelegate.h>

@class CATTransport, NSString;

@interface CRKInvalidateTransportOperation : CATOperation <CATTransportDelegate> {

	CATTransport* _transport;

}

@property (nonatomic,readonly) CATTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transportDidInvalidate:(id)arg1 ;
-(CATTransport *)transport;
-(id)initWithTransport:(id)arg1 ;
-(BOOL)isAsynchronous;
-(void)main;
@end

