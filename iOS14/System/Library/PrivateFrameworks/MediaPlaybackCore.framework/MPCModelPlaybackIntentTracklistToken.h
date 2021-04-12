/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding> {

	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;

}

@property (nonatomic,copy) MPModelRequest * request;                            //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;              //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requiredPropertiesForStaticMediaClips;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MPModelRequest *)request;
-(MPIdentifierSet *)startItemIdentifiers;
-(id)initWithCoder:(id)arg1 ;
@end

