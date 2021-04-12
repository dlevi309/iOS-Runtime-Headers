/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/


@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject {

	NSString* _name;
	NSString* _nameSpace;
	NSString* _value;

}

@property (nonatomic,retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSString * value;                  //@synthesize value=_value - In the implementation block
-(id)init;
-(NSString *)nameSpace;
-(NSString *)name;
-(void)setValue:(NSString *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setNameSpace:(NSString *)arg1 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 value:(id)arg3 ;
@end

