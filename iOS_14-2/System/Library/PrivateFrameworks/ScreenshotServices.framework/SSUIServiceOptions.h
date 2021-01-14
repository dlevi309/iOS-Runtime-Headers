/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFlashStyle:(unsigned long long)arg1 ;
-(void)setSaveLocation:(unsigned long long)arg1 ;
-(unsigned long long)saveLocation;
-(unsigned long long)flashStyle;
@end

