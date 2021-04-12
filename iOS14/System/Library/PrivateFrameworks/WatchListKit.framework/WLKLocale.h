/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, NSLocale;

@interface WLKLocale : NSObject {

	NSString* _displayName;
	NSLocale* _locale;

}

@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSLocale * locale;                   //@synthesize locale=_locale - In the implementation block
-(NSLocale *)locale;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)displayName;
@end

