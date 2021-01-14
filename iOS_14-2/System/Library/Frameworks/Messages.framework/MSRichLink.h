/*
* Generated on Thursday, January 14, 2021 at 2:26:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Messages.framework/Messages
*/

#import <Messages/Messages-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LPLinkMetadata, NSURL;

@interface MSRichLink : NSObject <NSCopying, NSSecureCoding> {

	LPLinkMetadata* _linkMetadata;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) LPLinkMetadata * _linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(LPLinkMetadata *)_linkMetadata;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)set_linkMetadata:(LPLinkMetadata *)arg1 ;
@end

