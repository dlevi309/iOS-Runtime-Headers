/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MSSubscribedStream : NSObject <NSSecureCoding> {

	NSString* _streamID;
	NSString* _ctag;

}

@property (nonatomic,retain) NSString * streamID;              //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                  //@synthesize ctag=_ctag - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)subscribedStreamWithStreamID:(id)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)streamID;
-(void)setStreamID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStreamID:(id)arg1 ;
@end

