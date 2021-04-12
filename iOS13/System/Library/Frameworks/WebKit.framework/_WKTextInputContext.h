/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKTextInputContext : NSObject <NSCopying> {

	ElementContext _textInputContext;

}

@property (nonatomic,readonly) CGRect boundingRect; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)boundingRect;
-(const ElementContext*)_textInputContext;
-(id)_initWithTextInputContext:(const ElementContext*)arg1 ;
@end

