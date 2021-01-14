/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDFill.h>

@class EDColorReference;

@interface EDPatternFill : EDFill {

	int mType;
	EDColorReference* mBackColorReference;
	EDColorReference* mForeColorReference;

}
+(id)patternFillWithType:(int)arg1 resources:(id)arg2 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 resources:(id)arg3 ;
+(id)patternFillWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
+(id)patternFillWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
-(void)setType:(int)arg1 ;
-(id)description;
-(int)type;
-(unsigned long long)hash;
-(BOOL)isEmpty;
-(id)initWithResources:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)foreColor;
-(id)backColor;
-(void)setForeColorReference:(id)arg1 ;
-(void)setBackColorReference:(id)arg1 ;
-(id)foreColorReference;
-(id)backColorReference;
-(void)setForeColor:(id)arg1 ;
-(void)setBackColor:(id)arg1 ;
-(BOOL)isEqualToPatternFill:(id)arg1 ;
-(id)initWithType:(int)arg1 foreColor:(id)arg2 backColor:(id)arg3 resources:(id)arg4 ;
-(id)initWithType:(int)arg1 foreColorReference:(id)arg2 backColorReference:(id)arg3 resources:(id)arg4 ;
@end

