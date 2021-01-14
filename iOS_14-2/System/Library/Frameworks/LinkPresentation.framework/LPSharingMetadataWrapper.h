/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dataRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasFetchedSubresources;
-(BOOL)hasCompletedFetch;
-(void)setHasCompletedFetch:(BOOL)arg1 ;
-(void)setMetadata:(LPLinkMetadata *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHasFetchedSubresources:(BOOL)arg1 ;
-(LPLinkMetadata *)metadata;
@end

