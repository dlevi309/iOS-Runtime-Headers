/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)itemID;
-(MPIdentifierSet *)identifiers;
-(NSString *)itemKind;
-(BOOL)isLibraryContent;
@end

