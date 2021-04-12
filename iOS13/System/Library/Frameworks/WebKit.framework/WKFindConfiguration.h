/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(void)setBackwards:(BOOL)arg1 ;
-(BOOL)backwards;
@end

