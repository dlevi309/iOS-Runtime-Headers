/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/

#import <ScreenshotServices/ScreenshotServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SSXPCEncodableRectWrapper : NSObject <BSXPCCoding, NSSecureCoding> {

	CGRect _rect;

}

@property (assign,nonatomic) CGRect rect;                           //@synthesize rect=_rect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)encodedRectsInDictionary:(id)arg1 forKey:(id)arg2 ;
+(void)encodeRects:(id)arg1 inDictionary:(id)arg2 forKey:(id)arg3 ;
-(CGRect)rect;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRect:(CGRect)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
@end

