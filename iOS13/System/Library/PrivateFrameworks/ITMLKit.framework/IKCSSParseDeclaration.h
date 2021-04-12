/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImportant:(BOOL)arg1 ;
-(NSRange)valueRange;
-(BOOL)important;
-(NSRange)nameRange;
-(void)setNameRange:(NSRange)arg1 ;
-(void)setValueRange:(NSRange)arg1 ;
@end

