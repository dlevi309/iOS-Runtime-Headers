/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDStyledInfo.h>

@class NSString;

@interface TSDMediaInfo : TSDStyledInfo {

	CGSize mOriginalSize;
	struct {
		unsigned isPlaceholder : 1;
		unsigned wasMediaReplaced : 1;
	}  mFlags;

}

@property (assign,nonatomic) CGSize originalSize; 
@property (nonatomic,readonly) CGSize defaultOriginalSize; 
@property (assign,nonatomic) BOOL isPlaceholder; 
@property (assign,nonatomic) BOOL wasMediaReplaced; 
@property (assign,nonatomic) unsigned flags; 
@property (nonatomic,readonly) NSString * mediaDisplayName; 
@property (nonatomic,readonly) NSString * mediaFileType; 
@property (nonatomic,readonly) CGSize rawDataSize; 
-(unsigned)flags;
-(BOOL)isPlaceholder;
-(void)setFlags:(unsigned)arg1 ;
-(CGSize)originalSize;
-(void)setGeometry:(id)arg1 ;
-(NSString *)mediaFileType;
-(void)setOriginalSize:(CGSize)arg1 ;
-(void)setIsPlaceholder:(BOOL)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(CGSize)defaultOriginalSize;
-(NSString *)mediaDisplayName;
-(CGSize)rawDataSize;
-(CGPoint)centerForReplacingWithNewMedia;
-(void)updateGeometryToReplaceMediaInfo:(id)arg1 ;
-(BOOL)wasMediaReplaced;
-(void)setWasMediaReplaced:(BOOL)arg1 ;
-(void)takePropertiesFromReplacedMediaInfo:(id)arg1 ;
@end

