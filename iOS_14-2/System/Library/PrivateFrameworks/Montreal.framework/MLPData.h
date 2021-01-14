/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)oneHot;
-(NSData *)pixels;
-(NSData *)classDist;
-(void)setOneHot:(NSData *)arg1 ;
-(void)setPixels:(NSData *)arg1 ;
-(void)setClassDist:(NSData *)arg1 ;
-(void)setLabel:(unsigned)arg1 ;
-(unsigned)label;
@end

