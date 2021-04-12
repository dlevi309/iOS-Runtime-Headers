/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRContentItemProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	_MRContentItemProtobuf* _item;
	_MRPlaybackQueueRequestProtobuf* _request;

}

@property (nonatomic,retain) _MRContentItemProtobuf * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(_MRContentItemProtobuf *)item;
-(void)setItem:(_MRContentItemProtobuf *)arg1 ;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(_MRPlaybackQueueRequestProtobuf *)request;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
@end

