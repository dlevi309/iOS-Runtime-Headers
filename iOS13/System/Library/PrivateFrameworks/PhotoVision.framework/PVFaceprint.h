/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)faceprintVersion;
-(NSData *)faceprintData;
-(void)setFaceprintVersion:(unsigned)arg1 ;
-(void)_setPropertiesFrom:(id)arg1 ;
-(BOOL)getDistance:(float*)arg1 toOtherFaceprint:(id)arg2 error:(id*)arg3 ;
-(void)setFaceprintData:(NSData *)arg1 ;
@end

