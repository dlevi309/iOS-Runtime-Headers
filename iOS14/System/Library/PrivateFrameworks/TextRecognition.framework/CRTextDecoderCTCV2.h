/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CRTextDecoding.h>

@class CRRecognizerConfiguration, NSLocale, CRTextSequenceRecognizerModel, CRRegex, NSOrderedSet, NSString;

@interface CRTextDecoderCTCV2 : NSObject <CRTextDecoding> {

	BOOL _shouldUseLM;
	CRRecognizerConfiguration* _configuration;
	NSLocale* _locale;
	CRTextSequenceRecognizerModel* _model;
	CRRegex* _regExpressions;
	NSOrderedSet* _characterObservations;

}

@property (nonatomic,readonly) NSLocale * locale;                                 //@synthesize locale=_locale - In the implementation block
@property (retain) CRTextSequenceRecognizerModel * model;                         //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) CRRegex * regExpressions;                            //@synthesize regExpressions=_regExpressions - In the implementation block
@property (assign,nonatomic) BOOL shouldUseLM;                                    //@synthesize shouldUseLM=_shouldUseLM - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * characterObservations;              //@synthesize characterObservations=_characterObservations - In the implementation block
@property (retain) CRRecognizerConfiguration * configuration;                     //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedLanguages;
-(CRTextSequenceRecognizerModel *)model;
-(NSLocale *)locale;
-(void)setModel:(CRTextSequenceRecognizerModel *)arg1 ;
-(CRRecognizerConfiguration *)configuration;
-(void)dealloc;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(NSOrderedSet *)characterObservations;
-(void)decodeOutput:(id)arg1 imageSize:(CGSize)arg2 error:(id*)arg3 ;
-(id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldDecodeWithLM;
-(BOOL)shouldUseLM;
-(CRRegex *)regExpressions;
-(void)setRegExpressions:(CRRegex *)arg1 ;
-(void)setShouldUseLM:(BOOL)arg1 ;
@end

