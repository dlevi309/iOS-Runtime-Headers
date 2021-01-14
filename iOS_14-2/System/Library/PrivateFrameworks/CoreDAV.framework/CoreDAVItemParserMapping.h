/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)nameSpace;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)setParseClass:(Class)arg1 ;
-(Class)parseClass;
@end

