/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(EDFill *)fill;
-(EDBorders *)borders;
-(void)setFont:(EDFont *)arg1 ;
-(void)setBorders:(EDBorders *)arg1 ;
-(EDProtection *)protection;
-(void)setProtection:(EDProtection *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EDFont *)font;
-(void)setFill:(EDFill *)arg1 ;
-(EDAlignmentInfo *)alignmentInfo;
-(EDContentFormat *)contentFormat;
-(void)setContentFormat:(EDContentFormat *)arg1 ;
-(void)setAlignmentInfo:(EDAlignmentInfo *)arg1 ;
@end

