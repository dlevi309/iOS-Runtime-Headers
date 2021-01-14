/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isEquivalent:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)url;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTitle:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 uniqueIdentifier:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

