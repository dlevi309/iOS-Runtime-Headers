/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@interface EMFQueryLogger : NSObject {

	const EmojiLocaleDataWrapperRef _localeData;

}

@property (nonatomic,readonly) const EmojiLocaleDataWrapperRef localeData;              //@synthesize localeData=_localeData - In the implementation block
+(id)documentWeightsStringFromQueryResult:(id)arg1 usingLocaleData:(const EmojiLocaleDataWrapperRef)arg2 ;
+(id)overriddenResultsStringFromQueryResult:(id)arg1 usingLocaleData:(const EmojiLocaleDataWrapperRef)arg2 ;
-(const EmojiLocaleDataWrapperRef)localeData;
-(void)dealloc;
-(id)initWithEmojiLocaleData:(const EmojiLocaleDataWrapperRef)arg1 ;
-(void)logQueryResult:(id)arg1 ;
@end

