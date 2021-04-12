/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _BlastDoorLPLinkMetadata;

@interface _BlastDoorLPSharingMetadataWrapper : NSObject <NSSecureCoding> {

	BOOL _hasFetchedSubresources;
	BOOL _hasCompletedFetch;
	_BlastDoorLPLinkMetadata* _metadata;

}

@property (nonatomic,retain) _BlastDoorLPLinkMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedSubresources;                      //@synthesize hasFetchedSubresources=_hasFetchedSubresources - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                           //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dataRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasFetchedSubresources;
-(BOOL)hasCompletedFetch;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(void)setMetadata:(_BlastDoorLPLinkMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHasFetchedSubresources:(BOOL)arg1 ;
-(_BlastDoorLPLinkMetadata *)metadata;
@end

