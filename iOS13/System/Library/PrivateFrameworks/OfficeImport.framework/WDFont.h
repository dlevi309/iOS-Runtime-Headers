/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface WDFont : NSObject <NSCopying> {

	NSString* mName;
	NSMutableArray* mAlternateNames;
	int mFontFamily;
	int mCharacterSet;
	int mPitch;

}
+(int)cpFontClassFromWdFontFamily:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)alternateNames;
-(int)pitch;
-(void)setPitch:(int)arg1 ;
-(int)fontFamily;
-(void)setFontFamily:(int)arg1 ;
-(int)characterSet;
-(void)setCharacterSet:(int)arg1 ;
-(void)addAlternateName:(id)arg1 ;
-(id)secondName;
@end

