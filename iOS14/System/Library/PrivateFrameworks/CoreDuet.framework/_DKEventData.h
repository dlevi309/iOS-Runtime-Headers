/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
@end

