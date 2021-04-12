/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSString;

@interface PXMiniHTMLParser : NSObject {

	/*^block*/id _parsedCharactersBlock;
	/*^block*/id _parsedMarkupElementStartBlock;
	/*^block*/id _parsedMarkupElementEndBlock;
	/*^block*/id _parsedErrorBlock;
	NSString* __string;

}

@property (nonatomic,readonly) NSString * _string;                        //@synthesize _string=__string - In the implementation block
@property (nonatomic,copy) id parsedCharactersBlock;                      //@synthesize parsedCharactersBlock=_parsedCharactersBlock - In the implementation block
@property (nonatomic,copy) id parsedMarkupElementStartBlock;              //@synthesize parsedMarkupElementStartBlock=_parsedMarkupElementStartBlock - In the implementation block
@property (nonatomic,copy) id parsedMarkupElementEndBlock;                //@synthesize parsedMarkupElementEndBlock=_parsedMarkupElementEndBlock - In the implementation block
@property (nonatomic,copy) id parsedErrorBlock;                           //@synthesize parsedErrorBlock=_parsedErrorBlock - In the implementation block
+(id)charactersForEntityNames;
+(id)stringByConvertingToHTML:(id)arg1 ;
-(void)parse;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(id)parsedMarkupElementStartBlock;
-(void)setParsedMarkupElementStartBlock:(id)arg1 ;
-(id)parsedMarkupElementEndBlock;
-(void)setParsedMarkupElementEndBlock:(id)arg1 ;
-(NSString *)_string;
-(id)parsedErrorBlock;
-(id)parsedCharactersBlock;
-(void)setParsedCharactersBlock:(id)arg1 ;
-(void)setParsedErrorBlock:(id)arg1 ;
@end

