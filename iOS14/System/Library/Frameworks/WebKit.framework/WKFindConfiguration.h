/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WKFindConfiguration : NSObject <NSCopying> {

	BOOL _backwards;
	BOOL _caseSensitive;
	BOOL _wraps;

}

@property (assign,nonatomic) BOOL backwards;                  //@synthesize backwards=_backwards - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
@property (assign,nonatomic) BOOL wraps;                      //@synthesize wraps=_wraps - In the implementation block
-(BOOL)wraps;
-(id)init;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)caseSensitive;
-(void)setWraps:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)backwards;
-(void)setBackwards:(BOOL)arg1 ;
@end

