/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARResultData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ARWorldTrackingErrorData : NSObject <ARResultData, NSSecureCoding> {

	double _timestamp;
	long long _errorCode;

}

@property (nonatomic,readonly) double timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long errorCode;                   //@synthesize errorCode=_errorCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithTimestamp:(double)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)errorCode;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

