/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

