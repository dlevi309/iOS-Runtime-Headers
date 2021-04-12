/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isPrerendered;
-(CGSize)pixelSize;
-(NSData *)imageData;
@end

