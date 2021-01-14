/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@class NSData;

@interface CARManufacturerIcon : NSObject {

	BOOL _prerendered;
	NSData* _imageData;
	CGSize _pixelSize;

}

@property (nonatomic,readonly) CGSize pixelSize;                                   //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                                 //@synthesize imageData=_imageData - In the implementation block
@property (getter=isPrerendered,nonatomic,readonly) BOOL prerendered;              //@synthesize prerendered=_prerendered - In the implementation block
-(BOOL)isPrerendered;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSData *)imageData;
-(CGSize)pixelSize;
@end

