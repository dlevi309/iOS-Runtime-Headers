/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/

#import <PhotoVision/PhotoVision-Structs.h>
#import <PhotoVision/PVObject.h>

@class NSData;

@interface PVFaceprint : PVObject {

	unsigned _faceprintVersion;
	NSData* _faceprintData;

}

@property (assign,nonatomic) unsigned faceprintVersion;              //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain) NSData * faceprintData;                 //@synthesize faceprintData=_faceprintData - In the implementation block
+(id)faceprintWithFaceprintData:(id)arg1 faceprintVersion:(unsigned)arg2 ;
-(BOOL)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(void)setFaceprintVersion:(unsigned)arg1 ;
-(NSData *)faceprintData;
-(unsigned)faceprintVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setPropertiesFrom:(id)arg1 ;
-(void)setFaceprintData:(NSData *)arg1 ;
@end

