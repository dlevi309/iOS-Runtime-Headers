/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDate, CLLocation;

@interface _PXFileBackedAssetMetadata : NSObject {

	NSDate* _date;
	CLLocation* _location;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(CGSize)size;
-(CLLocation *)location;
-(void)setSize:(CGSize)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSDate *)date;
@end

