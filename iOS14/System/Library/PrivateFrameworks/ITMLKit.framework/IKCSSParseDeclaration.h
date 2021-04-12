/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class NSString;

@interface IKCSSParseDeclaration : IKCSSParseObject {

	BOOL _important;
	NSString* _name;
	NSRange _nameRange;
	NSRange _valueRange;

}

@property (assign,nonatomic) NSRange nameRange;               //@synthesize nameRange=_nameRange - In the implementation block
@property (assign,nonatomic) NSRange valueRange;              //@synthesize valueRange=_valueRange - In the implementation block
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL important;                  //@synthesize important=_important - In the implementation block
-(id)init;
-(BOOL)important;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSRange)valueRange;
-(void)setImportant:(BOOL)arg1 ;
-(void)setValueRange:(NSRange)arg1 ;
-(NSRange)nameRange;
-(void)setNameRange:(NSRange)arg1 ;
@end

