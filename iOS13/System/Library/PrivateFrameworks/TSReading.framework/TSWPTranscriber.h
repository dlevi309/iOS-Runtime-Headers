/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {

	NSString* _displayName;
	NSString* _identifier;
	NSString* _transformIdentifier;
	NSLocale* _romanizationLocale;

}

@property (readonly) NSLocale * romanizationLocale;              //@synthesize romanizationLocale=_romanizationLocale - In the implementation block
+(id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(id)transcribeText:(id)arg1 withLocale:(id)arg2 ;
-(id)transcribeText:(id)arg1 ;
-(NSLocale *)romanizationLocale;
@end

