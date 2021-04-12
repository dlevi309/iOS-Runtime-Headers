/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier, MIPMediaItem;

@interface ML3ClientImportItem : NSObject <NSSecureCoding, NSCopying> {

	MIPMultiverseIdentifier* _multiverseIdentifier;
	MIPMediaItem* _mediaItem;

}

@property (nonatomic,copy,readonly) MIPMediaItem * mediaItem;                                    //@synthesize mediaItem=_mediaItem - In the implementation block
@property (nonatomic,copy,readonly) MIPMultiverseIdentifier * multiverseIdentifier;              //@synthesize multiverseIdentifier=_multiverseIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(MIPMultiverseIdentifier *)multiverseIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(MIPMediaItem *)mediaItem;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMultiverseIdentifier:(id)arg1 mediaItem:(id)arg2 ;
@end

