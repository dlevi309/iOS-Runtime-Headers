/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSMutableArray;

@interface TISCTextRunResponse : NSObject {

	CFArrayRef _ctLines;
	NSMutableArray* _widths;
	CTFontRef _font;

}
+(id)textRunResponseWithFont:(CTFontRef)arg1 ;
+(id)textRunResponseByMergingResponses:(id)arg1 ;
-(void)dealloc;
-(id)widths;
-(CTFontRef)font;
-(CFArrayRef)ctLines;
@end

