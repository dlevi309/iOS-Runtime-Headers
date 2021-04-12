/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject <NSSecureCoding> {

	NSString* _string;
	const unsigned short* _unichars;
	const char* _chars;
	int _length;
	BOOL _containsAnySpaces;
	BOOL _ownsUnichars;
	BOOL _ownsChars;

}

@property (nonatomic,readonly) NSString * normalizedString;              //@synthesize string=_string - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)normalizedString;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

