/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface WDShading : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mForegroundColor;
	OITSUColor* mBackgroundColor;

}
+(id)autoForegroundColor;
+(id)autoBackgroundColor;
+(id)nilShading;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(id)background;
-(void)setBackground:(id)arg1 ;
-(void)setForeground:(id)arg1 ;
-(id)foreground;
-(void)setShading:(id)arg1 ;
-(BOOL)isEqualToShading:(id)arg1 ;
@end

