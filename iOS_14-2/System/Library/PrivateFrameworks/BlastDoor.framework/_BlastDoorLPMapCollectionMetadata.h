/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSArray;

@interface _BlastDoorLPMapCollectionMetadata : _BlastDoorLPSpecializationMetadata {

	unsigned _numberOfItems;
	NSString* _name;
	_BlastDoorLPImage* _icon;
	_BlastDoorLPImage* _image;
	_BlastDoorLPImage* _darkImage;
	NSArray* _addresses;
	NSString* _publisherName;
	_BlastDoorLPImage* _publisherIcon;

}

@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned numberOfItems;                         //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                       //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * darkImage;                  //@synthesize darkImage=_darkImage - In the implementation block
@property (nonatomic,copy) NSArray * addresses;                              //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy) NSString * publisherName;                         //@synthesize publisherName=_publisherName - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * publisherIcon;              //@synthesize publisherIcon=_publisherIcon - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(NSArray *)addresses;
-(void)setImage:(_BlastDoorLPImage *)arg1 ;
-(unsigned)numberOfItems;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(void)setDarkImage:(_BlastDoorLPImage *)arg1 ;
-(void)setPublisherName:(NSString *)arg1 ;
-(_BlastDoorLPImage *)publisherIcon;
-(void)setPublisherIcon:(_BlastDoorLPImage *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)publisherName;
-(_BlastDoorLPImage *)image;
-(NSString *)name;
-(void)setNumberOfItems:(unsigned)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_BlastDoorLPImage *)darkImage;
@end

