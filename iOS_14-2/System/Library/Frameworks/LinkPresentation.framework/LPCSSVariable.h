/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSString;

@interface LPCSSVariable : NSObject {

	BOOL _important;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (getter=isImportant,nonatomic,readonly) BOOL important;              //@synthesize important=_important - In the implementation block
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)isImportant;
-(id)initWithName:(id)arg1 important:(BOOL)arg2 ;
-(id)variableByResolvingWithThemePath:(id)arg1 ;
@end

