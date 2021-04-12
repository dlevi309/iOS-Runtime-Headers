/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
*/


@protocol BRLTTranslatorProtocol;
@class NSBundle;

@interface BRLTSTranslator : NSObject {

	id<BRLTTranslatorProtocol> _translator;
	NSBundle* _bundle;

}

@property (nonatomic,readonly) id<BRLTTranslatorProtocol> translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) NSBundle * bundle;                                  //@synthesize bundle=_bundle - In the implementation block
-(NSBundle *)bundle;
-(id)initWithBundle:(id)arg1 ;
-(id<BRLTTranslatorProtocol>)translator;
-(id)brailleForText:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
-(id)textForBraille:(id)arg1 parameters:(id)arg2 locations:(out id*)arg3 ;
@end

