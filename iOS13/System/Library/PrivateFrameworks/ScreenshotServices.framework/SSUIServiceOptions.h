/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSUIServiceOptions : NSObject <BSXPCCoding, NSCopying> {

	unsigned long long _flashStyle;
	unsigned long long _saveLocation;

}

@property (assign,nonatomic) unsigned long long flashStyle;                //@synthesize flashStyle=_flashStyle - In the implementation block
@property (assign,nonatomic) unsigned long long saveLocation;              //@synthesize saveLocation=_saveLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)saveLocation;
-(void)setSaveLocation:(unsigned long long)arg1 ;
-(unsigned long long)flashStyle;
-(void)setFlashStyle:(unsigned long long)arg1 ;
@end

