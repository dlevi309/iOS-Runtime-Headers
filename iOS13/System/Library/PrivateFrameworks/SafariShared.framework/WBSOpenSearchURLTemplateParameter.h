/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSString;

@interface WBSOpenSearchURLTemplateParameter : NSObject {

	BOOL _optional;
	NSString* _name;
	NSString* _prefix;
	NSRange _range;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * prefix;                              //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) NSRange range;                                //@synthesize range=_range - In the implementation block
@property (assign,getter=isOptional,nonatomic) BOOL optional;              //@synthesize optional=_optional - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSRange)range;
-(BOOL)isOptional;
-(NSString *)prefix;
-(void)setRange:(NSRange)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
@end

