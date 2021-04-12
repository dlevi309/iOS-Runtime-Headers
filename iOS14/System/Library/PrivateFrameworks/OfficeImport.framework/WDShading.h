/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)background;
-(void)setBackground:(id)arg1 ;
-(void)setForeground:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(id)foreground;
-(void)setStyle:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShading:(id)arg1 ;
-(BOOL)isEqualToShading:(id)arg1 ;
@end

