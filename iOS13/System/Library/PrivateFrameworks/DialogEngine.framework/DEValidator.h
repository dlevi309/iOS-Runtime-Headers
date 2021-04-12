/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEValidator : NSObject {

	NSString* _templateDir;

}

@property (nonatomic,retain) NSString * templateDir;              //@synthesize templateDir=_templateDir - In the implementation block
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
-(id)validateString:(id)arg1 localeString:(id)arg2 ;
-(id)validate:(id)arg1 locale:(id)arg2 ;
-(id)validateWithParams:(id)arg1 locale:(id)arg2 ;
@end

