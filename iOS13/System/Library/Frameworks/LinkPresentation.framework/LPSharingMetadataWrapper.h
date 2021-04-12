/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata;

@interface LPSharingMetadataWrapper : NSObject <NSSecureCoding> {

	BOOL _hasFetchedSubresources;
	BOOL _hasCompletedFetch;
	LPLinkMetadata* _metadata;

}

@property (nonatomic,retain) LPLinkMetadata * metadata;                //@synthesize metadata=_metadata - In the implementation block
@property (assign,nonatomic) BOOL hasFetchedSubresources;              //@synthesize hasFetchedSubresources=_hasFetchedSubresources - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedFetch;                   //@synthesize hasCompletedFetch=_hasCompletedFetch - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dataRepresentation;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(LPLinkMetadata *)metadata;
-(void)setHasFetchedSubresources:(BOOL)arg1 ;
-(BOOL)hasFetchedSubresources;
-(BOOL)hasCompletedFetch;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
@end

