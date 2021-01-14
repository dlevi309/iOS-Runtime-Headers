/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, MPIdentifierSet, NSString;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding> {

	BOOL _libraryContent;
	NSDictionary* _dictionary;
	MPIdentifierSet* _identifiers;
	NSString* _itemKind;
	NSString* _itemID;

}

@property (nonatomic,copy,readonly) MPIdentifierSet * identifiers;                       //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemKind;                                 //@synthesize itemKind=_itemKind - In the implementation block
@property (getter=isLibraryContent,nonatomic,readonly) BOOL libraryContent;              //@synthesize libraryContent=_libraryContent - In the implementation block
@property (nonatomic,copy,readonly) NSString * itemID;                                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;                           //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(MPIdentifierSet *)identifiers;
-(NSString *)itemKind;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)itemID;
-(BOOL)isLibraryContent;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

