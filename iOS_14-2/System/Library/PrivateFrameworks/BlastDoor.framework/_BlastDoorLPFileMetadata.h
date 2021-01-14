/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <BlastDoor/BlastDoor-Structs.h>
#import <BlastDoor/_BlastDoorLPSpecializationMetadata.h>

@class NSString, _BlastDoorLPImage, NSDate;

@interface _BlastDoorLPFileMetadata : _BlastDoorLPSpecializationMetadata {

	NSString* _name;
	NSString* _type;
	unsigned long long _size;
	_BlastDoorLPImage* _thumbnail;
	_BlastDoorLPImage* _icon;
	NSDate* _creationDate;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long size;                    //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) _BlastDoorLPImage * icon;                   //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                      //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffecting_dummyPropertyForObservation;
-(_BlastDoorLPImage *)thumbnail;
-(void)_enumerateAsynchronousFields:(/*^block*/id)arg1 ;
-(unsigned long long)size;
-(void)setCreationDate:(NSDate *)arg1 ;
-(_BlastDoorLPImage *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setIcon:(_BlastDoorLPImage *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)name;
-(NSDate *)creationDate;
-(NSString *)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setThumbnail:(_BlastDoorLPImage *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

