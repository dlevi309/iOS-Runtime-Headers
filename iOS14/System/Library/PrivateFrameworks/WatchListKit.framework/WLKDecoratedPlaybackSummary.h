/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WLKPlaybackSummary, NSString;

@interface WLKDecoratedPlaybackSummary : NSObject <NSSecureCoding> {

	WLKPlaybackSummary* _summary;
	NSString* _canonicalID;

}

@property (nonatomic,readonly) WLKPlaybackSummary * summary;              //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;               //@synthesize canonicalID=_canonicalID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(NSString *)canonicalID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(WLKPlaybackSummary *)summary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSummary:(id)arg1 canonicalID:(id)arg2 ;
@end

