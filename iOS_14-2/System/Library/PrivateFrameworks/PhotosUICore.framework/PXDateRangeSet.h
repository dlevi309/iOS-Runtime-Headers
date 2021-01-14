/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableArray;

@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying> {

	NSMutableArray* __dateRanges;

}

@property (nonatomic,retain) NSMutableArray * _dateRanges;              //@synthesize _dateRanges=__dateRanges - In the implementation block
@property (nonatomic,readonly) long long count; 
+(id)dateRangeSet;
+(id)dateRangeSetWithDateRange:(id)arg1 ;
-(id)init;
-(long long)count;
-(id)initWithDateRange:(id)arg1 ;
-(void)set_dateRanges:(NSMutableArray *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dateRanges;
-(NSMutableArray *)_dateRanges;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

