/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, MRLanguageOption, _MRLanguageOptionGroupProtobuf, NSData, NSDictionary;

@interface MRLanguageOptionGroup : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsEmptySelection;
	BOOL _hasAllowsEmptySelection;
	NSArray* _languageOptions;
	MRLanguageOption* _defaultLanguageOption;

}

@property (nonatomic,readonly) _MRLanguageOptionGroupProtobuf * protobuf; 
@property (assign,nonatomic) BOOL allowsEmptySelection;                                   //@synthesize allowsEmptySelection=_allowsEmptySelection - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsEmptySelection;                                //@synthesize hasAllowsEmptySelection=_hasAllowsEmptySelection - In the implementation block
@property (nonatomic,copy) NSArray * languageOptions;                                     //@synthesize languageOptions=_languageOptions - In the implementation block
@property (nonatomic,retain) MRLanguageOption * defaultLanguageOption;                    //@synthesize defaultLanguageOption=_defaultLanguageOption - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)languageOptions;
-(MRLanguageOption *)defaultLanguageOption;
-(BOOL)hasAllowsEmptySelection;
-(void)setHasAllowsEmptySelection:(BOOL)arg1 ;
-(id)initWithLanguageOptions:(id)arg1 defaultLanguageOption:(id)arg2 allowsEmptySelection:(BOOL)arg3 ;
-(id)initWithData:(id)arg1 ;
-(id)description;
-(void)setLanguageOptions:(NSArray *)arg1 ;
-(void)setDefaultLanguageOption:(MRLanguageOption *)arg1 ;
-(void)setAllowsEmptySelection:(BOOL)arg1 ;
-(NSData *)data;
-(_MRLanguageOptionGroupProtobuf *)protobuf;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)allowsEmptySelection;
@end

