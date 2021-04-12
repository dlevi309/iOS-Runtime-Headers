/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NRLinkPreferences : NSObject <NSCopying> {

	unsigned char _linkType;

}

@property (nonatomic,readonly) unsigned char linkType;              //@synthesize linkType=_linkType - In the implementation block
+(id)createFromEncodedXPCDict:(id)arg1 ;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(BOOL)isNotEmpty;
-(unsigned char)linkType;
-(id)copyShortDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
@end

