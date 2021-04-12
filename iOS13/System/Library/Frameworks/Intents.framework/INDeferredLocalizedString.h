/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <Foundation/NSString.h>

@class NSString, NSArray, NSURL;

@interface INDeferredLocalizedString : NSString {

	NSString* _formatKey;
	NSString* _table;
	NSArray* _arguments;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSString* _cachedLocalization;

}

@property (nonatomic,copy,readonly) NSString * _formatKey;                       //@synthesize formatKey=_formatKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * _table;                           //@synthesize table=_table - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _arguments;                        //@synthesize arguments=_arguments - In the implementation block
@property (nonatomic,copy,readonly) NSString * _bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * _bundleURL;                          //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * _cachedLocalization;              //@synthesize cachedLocalization=_cachedLocalization - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(unsigned long long)length;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(Class)classForCoder;
-(NSString *)_table;
-(Class)classForKeyedArchiver;
-(NSArray *)_arguments;
-(NSString *)_bundleIdentifier;
-(NSURL *)_bundleURL;
-(NSString *)_formatKey;
-(NSString *)_cachedLocalization;
-(id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(char*)arg4 ;
-(id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5 ;
-(id)localizeForLanguage:(id)arg1 ;
-(id)_intents_encodeForProto;
@end

