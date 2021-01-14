/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSArray;

@interface RTManagedObjectLocationProperties : NSObject {

	NSArray* _latitudePropertyPath;
	NSArray* _longitudePropertyPath;
	NSArray* _referenceFramePropertyPath;

}

@property (nonatomic,retain) NSArray * latitudePropertyPath;                    //@synthesize latitudePropertyPath=_latitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * longitudePropertyPath;                   //@synthesize longitudePropertyPath=_longitudePropertyPath - In the implementation block
@property (nonatomic,retain) NSArray * referenceFramePropertyPath;              //@synthesize referenceFramePropertyPath=_referenceFramePropertyPath - In the implementation block
-(NSArray *)latitudePropertyPath;
-(void)setLatitudePropertyPath:(NSArray *)arg1 ;
-(NSArray *)referenceFramePropertyPath;
-(void)setReferenceFramePropertyPath:(NSArray *)arg1 ;
-(id)initWithLatitudePropertyPath:(id)arg1 longitudePropertyPath:(id)arg2 referenceFramePropertyPath:(id)arg3 ;
-(void)setLongitudePropertyPath:(NSArray *)arg1 ;
-(NSArray *)longitudePropertyPath;
@end

