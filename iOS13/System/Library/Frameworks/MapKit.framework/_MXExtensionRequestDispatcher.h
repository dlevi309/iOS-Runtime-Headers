/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/_MXExtensionRequestDispatching.h>
#import <libobjc.A.dylib/_MXExtensionStreamingRequestDispatching.h>

@class NSString;

@interface _MXExtensionRequestDispatcher : NSObject <NSSecureCoding, _MXExtensionRequestDispatching, _MXExtensionStreamingRequestDispatching>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dispatchRequest:(id)arg1 vendor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 toObserver:(id)arg3 ;
-(void)stopSendingUpdatesForRequest:(id)arg1 vendor:(id)arg2 ;
@end

