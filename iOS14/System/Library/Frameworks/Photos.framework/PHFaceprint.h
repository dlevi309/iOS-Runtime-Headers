/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSData;

@interface PHFaceprint : NSObject {

	long long _faceprintVersion;
	NSData* _faceprintData;

}

@property (nonatomic,readonly) long long faceprintVersion;                 //@synthesize faceprintVersion=_faceprintVersion - In the implementation block
@property (nonatomic,retain,readonly) NSData * faceprintData;              //@synthesize faceprintData=_faceprintData - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSData *)faceprintData;
-(id)initWithFaceprintData:(id)arg1 faceprintVersion:(long long)arg2 ;
-(long long)faceprintVersion;
@end

