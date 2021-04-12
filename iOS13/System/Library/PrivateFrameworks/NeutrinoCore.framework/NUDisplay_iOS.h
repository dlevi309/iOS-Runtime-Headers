/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUDisplay.h>

@class NSString, NUPixelFormat, NUColorSpace, CADisplay;

@interface NUDisplay_iOS : NSObject <NUDisplay> {

	CADisplay* _display;

}

@property (nonatomic,readonly) CADisplay * display;                 //@synthesize display=_display - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (readonly) NUPixelFormat * pixelFormat; 
@property (readonly) NUColorSpace * colorSpace; 
+(id)mainDisplay;
+(id)displays;
-(id)init;
-(NSString *)description;
-(NSString *)name;
-(id)identifier;
-(SCD_Struct_NU7)size;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;
-(id)initWithCADisplay:(id)arg1 ;
-(CADisplay *)display;
-(BOOL)wideColor;
@end

