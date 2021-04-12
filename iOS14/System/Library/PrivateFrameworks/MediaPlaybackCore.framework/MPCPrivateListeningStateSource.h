/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _overrideValue;
	NSNumber* _currentValue;

}

@property (nonatomic,copy,readonly) NSNumber * currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
@property (nonatomic,copy) NSNumber * overrideValue;                      //@synthesize overrideValue=_overrideValue - In the implementation block
@property (nonatomic,readonly) long long sourceType; 
+(BOOL)supportsSecureCoding;
+(id)localDeviceSource;
+(id)staticSourceWithValue:(id)arg1 ;
+(id)sourceWithUserIdentity:(id)arg1 ;
-(long long)sourceType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)currentValue;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)overrideValue;
-(void)setOverrideValue:(NSNumber *)arg1 ;
@end

