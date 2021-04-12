/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
*/

#import <CoreRoutine/CoreRoutine-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RTStoredLocationEnumerationOptions;

@interface RTStoredLocationEnumerationContext : NSObject <NSSecureCoding, NSCopying> {

	RTStoredLocationEnumerationOptions* _options;
	unsigned long long _offset;

}

@property (nonatomic,copy,readonly) RTStoredLocationEnumerationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                                      //@synthesize offset=_offset - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(RTStoredLocationEnumerationOptions *)options;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)offset;
-(id)initWithEnumerationOptions:(id)arg1 offset:(unsigned long long)arg2 ;
-(BOOL)isEqualToContext:(id)arg1 ;
-(id)initWithEnumerationOptions:(id)arg1 ;
@end

