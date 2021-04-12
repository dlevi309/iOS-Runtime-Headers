/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDAlignmentInfo, EDBorders, EDFill, EDFont, EDProtection, EDContentFormat;

@interface EDDifferentialStyle : NSObject <NSCopying> {

	EDAlignmentInfo* mAlignmentInfo;
	EDBorders* mBorders;
	EDFill* mFill;
	EDFont* mFont;
	EDProtection* mProtection;
	EDContentFormat* mContentFormat;

}

@property (nonatomic,retain) EDAlignmentInfo * alignmentInfo; 
@property (nonatomic,retain) EDBorders * borders; 
@property (nonatomic,retain) EDFill * fill; 
@property (nonatomic,retain) EDFont * font; 
@property (nonatomic,retain) EDProtection * protection; 
@property (nonatomic,retain) EDContentFormat * contentFormat; 
+(id)differentialStyle;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(EDFont *)arg1 ;
-(EDFont *)font;
-(EDFill *)fill;
-(void)setBorders:(EDBorders *)arg1 ;
-(EDBorders *)borders;
-(EDProtection *)protection;
-(void)setProtection:(EDProtection *)arg1 ;
-(void)setFill:(EDFill *)arg1 ;
-(EDAlignmentInfo *)alignmentInfo;
-(EDContentFormat *)contentFormat;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
@end

