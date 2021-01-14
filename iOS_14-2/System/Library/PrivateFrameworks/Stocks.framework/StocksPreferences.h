/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
*/


@class NSUserDefaults;

@interface StocksPreferences : NSObject {

	BOOL _changeColorSwapped;
	unsigned long long _textDirection;
	NSUserDefaults* _sharedDefaults;
	BOOL _textAttachmentDirectionIsRightToLeft;

}

@property (getter=isChangeColorSwapped,nonatomic,readonly) BOOL changeColorSwapped;              //@synthesize changeColorSwapped=_changeColorSwapped - In the implementation block
@property (nonatomic,readonly) unsigned long long textDirection;                                 //@synthesize textDirection=_textDirection - In the implementation block
@property (nonatomic,readonly) BOOL textAttachmentDirectionIsRightToLeft;                        //@synthesize textAttachmentDirectionIsRightToLeft=_textAttachmentDirectionIsRightToLeft - In the implementation block
+(void)clearSharedPreferences;
+(id)sharedPreferences;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isChangeColorSwapped;
-(void)removeObjectForKey:(id)arg1 ;
-(unsigned long long)textDirection;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)resetLocale;
-(BOOL)boolForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(BOOL)textAttachmentDirectionIsRightToLeft;
-(id)stringForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

