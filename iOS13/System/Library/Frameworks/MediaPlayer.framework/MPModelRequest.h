/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelKind *)itemKind;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(MPPropertySet *)itemProperties;
-(Class)sectionClass;
-(void)setSectionClass:(Class)arg1 ;
-(Class)itemClass;
-(void)setItemClass:(Class)arg1 ;
-(id)_kindForClass:(Class)arg1 ;
-(MPModelKind *)sectionKind;
-(void)setSectionKind:(MPModelKind *)arg1 ;
-(MPPropertySet *)sectionProperties;
-(void)setSectionProperties:(MPPropertySet *)arg1 ;
-(NSArray *)sectionSortDescriptors;
-(void)setSectionSortDescriptors:(NSArray *)arg1 ;
-(void)setItemProperties:(MPPropertySet *)arg1 ;
-(NSArray *)itemSortDescriptors;
-(void)setItemSortDescriptors:(NSArray *)arg1 ;
@end

