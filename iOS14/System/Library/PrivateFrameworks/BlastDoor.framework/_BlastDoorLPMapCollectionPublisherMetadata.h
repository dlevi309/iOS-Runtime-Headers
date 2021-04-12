/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPMapCollectionPublisherMetadata : _BlastDoorLPSpecializationMetadata {

	unsigned _numberOfPublishedCollections;
	NSString* _name;
	_BlastDoorLPImage* _icon;

}

@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) unsigned numberOfPublishedCollections;              //@synthesize numberOfPublishedCollections=_numberOfPublishedCollections - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(unsigned)numberOfPublishedCollections;
-(void)setNumberOfPublishedCollections:(unsigned)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

