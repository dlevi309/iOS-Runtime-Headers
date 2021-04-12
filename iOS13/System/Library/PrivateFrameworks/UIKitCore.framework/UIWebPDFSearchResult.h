/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(CGRect)boundingBox;
-(void)setBoundingBox:(CGRect)arg1 ;
-(NSArray *)rects;
-(NSArray *)strings;
-(void)setStrings:(NSArray *)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setRects:(NSArray *)arg1 ;
-(NSArray *)rotationAngles;
-(void)setRotationAngles:(NSArray *)arg1 ;
@end

