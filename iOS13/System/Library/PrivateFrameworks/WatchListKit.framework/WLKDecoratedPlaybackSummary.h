/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(WLKPlaybackSummary *)summary;
-(NSString *)canonicalID;
-(id)initWithSummary:(id)arg1 canonicalID:(id)arg2 ;
@end

