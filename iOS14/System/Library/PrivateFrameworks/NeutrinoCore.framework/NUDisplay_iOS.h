/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUDisplay.h>

@class NSString, NUPixelFormat, NUColorSpace, CADisplay;

@interface NUDisplay_iOS : NSObject <NUDisplay> {

	CADisplay* _display;

}

@property (nonatomic,readonly) CADisplay * display;                 //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) id identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) SCD_Struct_NU7 size; 
@property (readonly) NUPixelFormat * pixelFormat; 
@property (readonly) NUColorSpace * colorSpace; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displays;
+(id)mainDisplay;
-(NUColorSpace *)colorSpace;
-(id)init;
-(NUPixelFormat *)pixelFormat;
-(SCD_Struct_NU7)size;
-(NSString *)name;
-(NSString *)description;
-(id)initWithCADisplay:(id)arg1 ;
-(CADisplay *)display;
-(id)identifier;
-(BOOL)wideColor;
@end

