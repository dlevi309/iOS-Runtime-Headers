/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	MRContentItem* _item;
	MRPlaybackQueueRequest* _request;

}

@property (nonatomic,retain) MRContentItem * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MRPlaybackQueueRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequest:(MRPlaybackQueueRequest *)arg1 ;
-(MRContentItem *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(MRPlaybackQueueRequest *)request;
-(void)setItem:(MRContentItem *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
@end

