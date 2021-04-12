/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)init;
-(void)synchronize;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)resetLocale;
-(unsigned long long)textDirection;
-(BOOL)textAttachmentDirectionIsRightToLeft;
-(BOOL)isChangeColorSwapped;
@end

