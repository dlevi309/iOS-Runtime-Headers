/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelKind, NSString, MPPropertySet;

@interface MPModelLibrarySearchScope : NSObject <NSCopying, NSSecureCoding> {

	shared_ptr<mlcore::LocalizedSearchScope>* _coreScope;
	MPModelKind* _itemKind;
	NSString* _name;
	MPPropertySet* _itemProperties;

}

@property (nonatomic,readonly) shared_ptr<mlcore::LocalizedSearchScope>* coreScope; 
@property (nonatomic,retain) MPModelKind * itemKind;                                             //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) MPPropertySet * itemProperties;                              //@synthesize itemProperties=_itemProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MPModelKind *)itemKind;
-(id)initWithItemKind:(id)arg1 name:(id)arg2 properties:(id)arg3 ;
-(shared_ptr<mlcore::LocalizedSearchScope>*)coreScope;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(MPPropertySet *)itemProperties;
@end

