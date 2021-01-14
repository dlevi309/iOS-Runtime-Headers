/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface SHSignatureMetrics : NSObject <NSSecureCoding, NSCopying> {

	NSString* _audioSource;
	NSDate* _sessionStartDate;

}

@property (nonatomic,copy) NSString * audioSource;                     //@synthesize audioSource=_audioSource - In the implementation block
@property (nonatomic,readonly) NSDate * sessionStartDate;              //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) double sessionDuration; 
+(BOOL)supportsSecureCoding;
-(void)setAudioSource:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)sessionStartDate;
-(double)sessionDuration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSessionStartDate:(id)arg1 ;
-(NSString *)audioSource;
@end

