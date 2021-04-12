/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}

@property (nonatomic,readonly) unsigned long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSData * event;                                     //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) unsigned long long uncompressedLength;              //@synthesize uncompressedLength=_uncompressedLength - In the implementation block
+(id)fromPBCodable:(id)arg1 ;
+(id)createFromData:(id)arg1 ;
-(unsigned long long)version;
-(NSData *)event;
-(id)toPBCodable;
-(id)asData;
-(unsigned long long)uncompressedLength;
-(id)initWithCompressedData:(id)arg1 uncompressedLength:(unsigned long long)arg2 version:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end

