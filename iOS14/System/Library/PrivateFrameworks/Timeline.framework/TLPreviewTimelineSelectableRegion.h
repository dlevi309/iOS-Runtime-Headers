/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TLPreviewTimelineSelectableRegion : NSObject <NSCopying, NSSecureCoding> {

	NSString* _path;
	CGRect _rect;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) CGRect rect;                  //@synthesize rect=_rect - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGRect)rect;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)path;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPath:(id)arg1 rect:(CGRect)arg2 ;
@end

