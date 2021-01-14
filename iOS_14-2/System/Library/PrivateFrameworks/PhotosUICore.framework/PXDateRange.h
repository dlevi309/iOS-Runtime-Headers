/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXDateRange : NSObject <NSCopying> {

	double _startDate;
	double _endDate;

}

@property (readonly) double startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double endDate;                //@synthesize endDate=_endDate - In the implementation block
-(double)endDate;
-(BOOL)intersectsRange:(id)arg1 ;
-(id)initWithStartDate:(double)arg1 endDate:(double)arg2 ;
-(double)startDate;
-(BOOL)isStrictlyBeforeRange:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

