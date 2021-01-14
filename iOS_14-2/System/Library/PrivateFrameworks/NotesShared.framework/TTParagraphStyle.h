/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/TTModelAttributeComparable.h>

@class NSUUID, NSString;

@interface TTParagraphStyle : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, TTModelAttributeComparable> {

	BOOL _needsParagraphCleanup;
	BOOL _needsListCleanup;
	unsigned _style;
	unsigned _hints;
	unsigned long long _alignment;
	long long _writingDirection;
	unsigned long long _indent;
	unsigned long long _startingItemNumber;

}

@property (assign,nonatomic) unsigned style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                       //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) long long writingDirection;                         //@synthesize writingDirection=_writingDirection - In the implementation block
@property (assign,nonatomic) unsigned long long indent;                          //@synthesize indent=_indent - In the implementation block
@property (assign,nonatomic) unsigned long long startingItemNumber;              //@synthesize startingItemNumber=_startingItemNumber - In the implementation block
@property (assign,nonatomic) unsigned hints;                                     //@synthesize hints=_hints - In the implementation block
@property (assign,nonatomic) BOOL needsParagraphCleanup;                         //@synthesize needsParagraphCleanup=_needsParagraphCleanup - In the implementation block
@property (assign,nonatomic) BOOL needsListCleanup;                              //@synthesize needsListCleanup=_needsListCleanup - In the implementation block
@property (nonatomic,readonly) BOOL canIndent; 
@property (nonatomic,readonly) BOOL isList; 
@property (nonatomic,readonly) BOOL isHeader; 
@property (nonatomic,readonly) BOOL uniqueToLine; 
@property (nonatomic,readonly) BOOL preferSingleLine; 
@property (nonatomic,readonly) BOOL wantsFollowingNewLine; 
@property (nonatomic,readonly) NSUUID * trackingUUID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)textAlignmentForParagraphStyleAlignment:(int)arg1 ;
+(int)paragraphStyleAlignmentForTextAlignment:(unsigned long long)arg1 ;
+(id)paragraphStyleNamed:(unsigned)arg1 ;
+(id)defaultParagraphStyle;
-(id)serialize;
-(unsigned)hints;
-(void)saveToArchive:(ParagraphStyle*)arg1 ;
-(id)initWithArchive:(const ParagraphStyle*)arg1 ;
-(id)init;
-(void)setStartingItemNumber:(unsigned long long)arg1 ;
-(unsigned long long)startingItemNumber;
-(unsigned long long)alignment;
-(void)setIndent:(unsigned long long)arg1 ;
-(unsigned long long)indent;
-(BOOL)isList;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)canIndent;
-(BOOL)needsParagraphCleanup;
-(void)setNeedsParagraphCleanup:(BOOL)arg1 ;
-(BOOL)needsListCleanup;
-(BOOL)isUnknownStyle;
-(id)initWithData:(id)arg1 ;
-(void)setNeedsListCleanup:(BOOL)arg1 ;
-(BOOL)isEqualToParagraphStyle:(id)arg1 ;
-(BOOL)isEqualToModelParagraphStyle:(id)arg1 ;
-(BOOL)isEqualToModelComparable:(id)arg1 ;
-(BOOL)preferSingleLine;
-(BOOL)wantsFollowingNewLine;
-(BOOL)uniqueToLine;
-(id)listBulletInAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(NSUUID *)trackingUUID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setHints:(unsigned)arg1 ;
-(BOOL)isHeader;
-(NSString *)description;
-(void)setWritingDirection:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)writingDirection;
-(void)setStyle:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)style;
-(BOOL)isEqual:(id)arg1 ;
@end

