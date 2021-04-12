/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)isOptional;
-(NSString *)prefix;
-(NSRange)range;
-(NSString *)name;
-(void)setPrefix:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
@end

