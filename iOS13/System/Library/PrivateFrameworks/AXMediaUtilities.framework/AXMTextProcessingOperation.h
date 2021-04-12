/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AXMLanguage, AXMDiagnostics, NSLocale;

@interface AXMTextProcessingOperation : NSObject {

	AXMLanguage* _language;
	AXMDiagnostics* _diagnostics;

}

@property (nonatomic,readonly) NSLocale * lexiconLocale; 
@property (nonatomic,retain) AXMDiagnostics * diagnostics;              //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) AXMLanguage * language;                  //@synthesize language=_language - In the implementation block
+(id)operationWithLanguage:(id)arg1 diagnostics:(id)arg2 ;
+(id)operationWithSystemLanguage:(id)arg1 ;
-(AXMLanguage *)language;
-(AXMDiagnostics *)diagnostics;
-(void)setDiagnostics:(AXMDiagnostics *)arg1 ;
-(id)_initWithLanguage:(id)arg1 diagnostics:(id)arg2 ;
-(NSLocale *)lexiconLocale;
@end

