/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)widths;
-(CFArrayRef)ctLines;
-(void)dealloc;
-(CTFontRef)font;
@end

