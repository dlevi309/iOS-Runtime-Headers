/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TLPreviewTimelineError : NSObject <NSCopying, NSSecureCoding> {

	long long _errorType;
	NSString* _errorDescription;
	NSString* _path;

}

@property (nonatomic,readonly) long long errorType;                      //@synthesize errorType=_errorType - In the implementation block
@property (nonatomic,readonly) NSString * errorDescription;              //@synthesize errorDescription=_errorDescription - In the implementation block
@property (nonatomic,readonly) NSString * path;                          //@synthesize path=_path - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(NSString *)errorDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)errorType;
-(id)initWithErrorType:(long long)arg1 errorDescription:(id)arg2 path:(id)arg3 ;
-(id)initWithErrorType:(long long)arg1 errorDescription:(id)arg2 ;
@end

