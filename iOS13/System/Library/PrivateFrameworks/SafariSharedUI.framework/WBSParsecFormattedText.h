/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)text;
-(BOOL)isEmphasized;
-(NSNumber *)spaceAfterInPoints;
-(NSNumber *)spaceBeforeInPoints;
-(id)glyphWithSession:(id)arg1 ;
-(WBSParsecImageRepresentation *)glyphRepresentation;
@end

