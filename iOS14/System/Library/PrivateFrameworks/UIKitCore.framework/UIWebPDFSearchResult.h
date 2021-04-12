/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {

	NSArray* rotationAngles;
	unsigned long long pageIndex;
	NSArray* strings;
	NSString* string;
	NSArray* rects;
	CGRect boundingBox;

}

@property (assign,nonatomic) unsigned long long pageIndex; 
@property (nonatomic,retain) NSString * string; 
@property (assign,nonatomic) CGRect boundingBox; 
@property (nonatomic,retain) NSArray * strings; 
@property (nonatomic,retain) NSArray * rects; 
@property (nonatomic,retain) NSArray * rotationAngles; 
-(NSArray *)rects;
-(NSArray *)strings;
-(NSArray *)rotationAngles;
-(void)setRotationAngles:(NSArray *)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(unsigned long long)pageIndex;
-(CGRect)boundingBox;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setRects:(NSArray *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)dealloc;
@end

