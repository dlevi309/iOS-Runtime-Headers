/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface VSCasePreservingString : NSString {

	NSString* _underlyingString;

}
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)lowercaseString;
-(id)uppercaseString;
-(id)capitalizedString;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(id)localizedUppercaseString;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
@end

