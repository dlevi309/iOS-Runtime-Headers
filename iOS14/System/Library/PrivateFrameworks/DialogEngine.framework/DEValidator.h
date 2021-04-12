/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEValidator : NSObject {

	NSString* _templateDir;

}

@property (nonatomic,retain) NSString * templateDir;              //@synthesize templateDir=_templateDir - In the implementation block
-(id)jsonToResult:(id)arg1 ;
-(id)validateString:(id)arg1 localeString:(id)arg2 ;
-(id)validateFile:(id)arg1 locale:(id)arg2 ;
-(id)validate:(id)arg1 locale:(id)arg2 ;
-(id)validateWithParams:(id)arg1 locale:(id)arg2 ;
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
@end

