/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRLinkPreferences : NSObject <NSCopying> {

	unsigned char _linkType;

}

@property (nonatomic,readonly) unsigned char linkType;              //@synthesize linkType=_linkType - In the implementation block
+(id)createFromEncodedXPCDict:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isNotEmpty;
-(unsigned char)linkType;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(id)copyShortDescription;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
@end

