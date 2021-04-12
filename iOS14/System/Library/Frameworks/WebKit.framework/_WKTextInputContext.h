/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKTextInputContext : NSObject <NSCopying> {

	ElementContext _textInputContext;

}

@property (nonatomic,readonly) CGRect boundingRect; 
-(id)init;
-(CGRect)boundingRect;
-(unsigned long long)hash;
-(id)_initWithTextInputContext:(const ElementContext*)arg1 ;
-(const ElementContext*)_textInputContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

