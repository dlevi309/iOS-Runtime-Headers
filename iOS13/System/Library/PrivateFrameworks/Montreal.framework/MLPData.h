/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
*/


@class NSData;

@interface MLPData : NSObject {

	unsigned _label;
	NSData* _oneHot;
	NSData* _pixels;
	NSData* _classDist;

}

@property (assign) unsigned label;                  //@synthesize label=_label - In the implementation block
@property (retain) NSData * oneHot;                 //@synthesize oneHot=_oneHot - In the implementation block
@property (retain) NSData * pixels;                 //@synthesize pixels=_pixels - In the implementation block
@property (retain) NSData * classDist;              //@synthesize classDist=_classDist - In the implementation block
-(void)setLabel:(unsigned)arg1 ;
-(unsigned)label;
-(NSData *)oneHot;
-(void)setOneHot:(NSData *)arg1 ;
-(NSData *)pixels;
-(void)setPixels:(NSData *)arg1 ;
-(NSData *)classDist;
-(void)setClassDist:(NSData *)arg1 ;
@end

