/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BMStreamMetadata : NSObject <NSSecureCoding> {

	Class _eventDataClass;

}

@property (nonatomic,readonly) Class eventDataClass;              //@synthesize eventDataClass=_eventDataClass - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithEventType:(Class)arg1 ;
-(BOOL)isEqualStreamMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)eventDataClass;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

