/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMData, NSNumber, EDAMResourceAttributes;

@interface EDAMResource : FATObject {

	NSString* _guid;
	NSString* _noteGuid;
	EDAMData* _data;
	NSString* _mime;
	NSNumber* _width;
	NSNumber* _height;
	NSNumber* _duration;
	NSNumber* _active;
	EDAMData* _recognition;
	EDAMResourceAttributes* _attributes;
	NSNumber* _updateSequenceNum;
	EDAMData* _alternateData;

}

@property (nonatomic,retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * noteGuid;                              //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) EDAMData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * mime;                                  //@synthesize mime=_mime - In the implementation block
@property (nonatomic,retain) NSNumber * width;                                 //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) NSNumber * height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSNumber * active;                                //@synthesize active=_active - In the implementation block
@property (nonatomic,retain) EDAMData * recognition;                           //@synthesize recognition=_recognition - In the implementation block
@property (nonatomic,retain) EDAMResourceAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                     //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) EDAMData * alternateData;                         //@synthesize alternateData=_alternateData - In the implementation block
+(id)structName;
+(id)structFields;
-(EDAMData *)data;
-(EDAMResourceAttributes *)attributes;
-(void)setData:(EDAMData *)arg1 ;
-(void)setAttributes:(EDAMResourceAttributes *)arg1 ;
-(void)setActive:(NSNumber *)arg1 ;
-(NSNumber *)duration;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(NSNumber *)active;
-(EDAMData *)recognition;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setRecognition:(EDAMData *)arg1 ;
-(NSString *)mime;
-(void)setMime:(NSString *)arg1 ;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(EDAMData *)alternateData;
-(void)setAlternateData:(EDAMData *)arg1 ;
@end

