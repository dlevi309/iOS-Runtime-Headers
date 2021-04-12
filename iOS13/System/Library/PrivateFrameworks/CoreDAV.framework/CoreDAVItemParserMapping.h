/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class NSString;

@interface CoreDAVItemParserMapping : NSObject {

	NSString* _nameSpace;
	NSString* _name;
	Class _parseClass;

}

@property (nonatomic,retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) Class parseClass;                  //@synthesize parseClass=_parseClass - In the implementation block
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)nameSpace;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)setParseClass:(Class)arg1 ;
-(Class)parseClass;
@end

