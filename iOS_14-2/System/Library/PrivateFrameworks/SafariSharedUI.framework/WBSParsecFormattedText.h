/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, WBSParsecImageRepresentation, NSNumber;

@interface WBSParsecFormattedText : WBSParsecModel {

	BOOL _emphasized;
	NSString* _text;
	WBSParsecImageRepresentation* _glyphRepresentation;
	NSNumber* _spaceBeforeInPoints;
	NSNumber* _spaceAfterInPoints;

}

@property (nonatomic,copy,readonly) NSString * text;                                            //@synthesize text=_text - In the implementation block
@property (getter=isEmphasized,nonatomic,readonly) BOOL emphasized;                             //@synthesize emphasized=_emphasized - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * glyphRepresentation;              //@synthesize glyphRepresentation=_glyphRepresentation - In the implementation block
@property (nonatomic,readonly) NSNumber * spaceBeforeInPoints;                                  //@synthesize spaceBeforeInPoints=_spaceBeforeInPoints - In the implementation block
@property (nonatomic,readonly) NSNumber * spaceAfterInPoints;                                   //@synthesize spaceAfterInPoints=_spaceAfterInPoints - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(unsigned long long)hash;
-(BOOL)isEmphasized;
-(BOOL)isEqual:(id)arg1 ;
-(NSNumber *)spaceAfterInPoints;
-(NSNumber *)spaceBeforeInPoints;
-(id)glyphWithSession:(id)arg1 ;
-(WBSParsecImageRepresentation *)glyphRepresentation;
@end

