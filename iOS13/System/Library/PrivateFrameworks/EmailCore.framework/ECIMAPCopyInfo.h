/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/


@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject {

	unsigned _uidValidity;
	NSDictionary* _sourceUIDsToDestinationUIDs;

}

@property (assign,nonatomic) unsigned uidValidity;                                    //@synthesize uidValidity=_uidValidity - In the implementation block
@property (nonatomic,retain) NSDictionary * sourceUIDsToDestinationUIDs;              //@synthesize sourceUIDsToDestinationUIDs=_sourceUIDsToDestinationUIDs - In the implementation block
-(unsigned)uidValidity;
-(void)setUidValidity:(unsigned)arg1 ;
-(NSDictionary *)sourceUIDsToDestinationUIDs;
-(void)setSourceUIDsToDestinationUIDs:(NSDictionary *)arg1 ;
@end

