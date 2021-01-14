/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/MFObject.h>

@class NSMutableArray;

@interface MFPalette : NSObject <MFObject> {

	NSMutableArray* m_colours;

}
+(id)paletteWithColours:(id)arg1 ;
-(id)init;
-(BOOL)resize:(int)arg1 ;
-(int)selectInto:(id)arg1 ;
-(id)initWithColours:(id)arg1 ;
-(BOOL)setEntries:(int)arg1 in_colours:(id)arg2 ;
-(id)getColour:(int)arg1 ;
@end

