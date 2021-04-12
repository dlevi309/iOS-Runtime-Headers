/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)nameSpace;
-(void)setNameSpace:(NSString *)arg1 ;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 value:(id)arg3 ;
@end

