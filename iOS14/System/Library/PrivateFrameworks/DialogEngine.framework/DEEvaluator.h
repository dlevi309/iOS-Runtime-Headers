/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEEvaluator : NSObject {

	NSString* _templateDir;
	NSString* _locale;
	NSString* _typeName;
	NSString* _propName;
	id _parameters;

}

@property (nonatomic,retain) NSString * templateDir;              //@synthesize templateDir=_templateDir - In the implementation block
@property (nonatomic,retain) NSString * locale;                   //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSString * typeName;                 //@synthesize typeName=_typeName - In the implementation block
@property (nonatomic,retain) NSString * propName;                 //@synthesize propName=_propName - In the implementation block
@property (nonatomic,retain) id parameters;                       //@synthesize parameters=_parameters - In the implementation block
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(NSString *)locale;
-(void)setLocale:(NSString *)arg1 ;
-(id)evaluate;
-(void)setTypeName:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setPropName:(NSString *)arg1 ;
-(void)setTemplateDir:(NSString *)arg1 ;
-(NSString *)templateDir;
-(NSString *)propName;
@end

