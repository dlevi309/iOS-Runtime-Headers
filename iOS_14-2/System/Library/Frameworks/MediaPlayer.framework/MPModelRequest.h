/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPModelKind, MPPropertySet, NSArray;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _label;
	MPModelKind* _sectionKind;
	MPPropertySet* _sectionProperties;
	NSArray* _sectionSortDescriptors;
	MPModelKind* _itemKind;
	MPPropertySet* _itemProperties;
	NSArray* _itemSortDescriptors;

}

@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MPModelKind * sectionKind;                    //@synthesize sectionKind=_sectionKind - In the implementation block
@property (nonatomic,copy) MPPropertySet * sectionProperties;              //@synthesize sectionProperties=_sectionProperties - In the implementation block
@property (nonatomic,copy) NSArray * sectionSortDescriptors;               //@synthesize sectionSortDescriptors=_sectionSortDescriptors - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                       //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) MPPropertySet * itemProperties;                 //@synthesize itemProperties=_itemProperties - In the implementation block
@property (nonatomic,copy) NSArray * itemSortDescriptors;                  //@synthesize itemSortDescriptors=_itemSortDescriptors - In the implementation block
@property (nonatomic,retain) Class sectionClass; 
@property (nonatomic,retain) Class itemClass; 
+(BOOL)supportsSecureCoding;
+(id)sharedQueue;
+(id)sharedNetworkQueue;
+(BOOL)requiresNetwork;
+(id)preferredQueue;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelKind *)itemKind;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)itemClass;
-(Class)sectionClass;
-(void)setSectionClass:(Class)arg1 ;
-(void)setItemClass:(Class)arg1 ;
-(id)_kindForClass:(Class)arg1 ;
-(MPModelKind *)sectionKind;
-(void)setSectionKind:(MPModelKind *)arg1 ;
-(NSArray *)sectionSortDescriptors;
-(void)setSectionSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)itemSortDescriptors;
-(void)setItemSortDescriptors:(NSArray *)arg1 ;
-(id)description;
-(void)setItemProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)sectionProperties;
-(MPPropertySet *)itemProperties;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(void)setSectionProperties:(MPPropertySet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
@end

