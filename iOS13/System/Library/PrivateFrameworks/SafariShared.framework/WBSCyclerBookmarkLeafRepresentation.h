/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSCyclerBookmarkRepresentation.h>

@class NSURL;

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerBookmarkRepresentation {

	NSURL* _url;

}

@property (setter=setURL:,nonatomic,retain) NSURL * url;              //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setURL:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3 ;
@end

