/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface VSCasePreservingString : NSString {

	NSString* _underlyingString;

}
-(id)lowercaseStringWithLocale:(id)arg1 ;
-(id)uppercaseStringWithLocale:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)capitalizedString;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)length;
-(id)lowercaseString;
-(id)capitalizedStringWithLocale:(id)arg1 ;
-(id)localizedUppercaseString;
-(id)localizedLowercaseString;
-(id)localizedCapitalizedString;
-(id)uppercaseString;
@end

