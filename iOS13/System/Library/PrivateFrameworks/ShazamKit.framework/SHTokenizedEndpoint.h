/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SHTokenizedEndpoint : NSObject <NSCopying> {

	NSString* _tokenURLString;

}

@property (nonatomic,copy) NSString * tokenURLString;              //@synthesize tokenURLString=_tokenURLString - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithTokenURL:(id)arg1 ;
-(NSString *)tokenURLString;
-(id)tokenForTokenType:(long long)arg1 ;
-(void)setTokenURLString:(NSString *)arg1 ;
-(BOOL)updateToken:(long long)arg1 withValue:(id)arg2 ;
-(id)URLRepresentation;
-(BOOL)containsTokens;
@end

