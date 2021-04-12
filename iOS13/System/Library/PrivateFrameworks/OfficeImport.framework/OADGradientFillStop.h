/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {

	OADColor* mColor;
	float mPosition;

}
+(void)addStopWithColor:(id)arg1 position:(float)arg2 toArray:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)position;
-(id)color;
-(void)setStyleColor:(id)arg1 ;
-(BOOL)usesPlaceholderColor;
-(id)initWithColor:(id)arg1 position:(float)arg2 ;
@end

