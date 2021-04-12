/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARResultData.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(id)initWithTimestamp:(double)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
@end

