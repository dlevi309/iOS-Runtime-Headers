/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/

#import <InAppMessagesCore/InAppMessagesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface IAMImage : NSObject <NSCopying> {

	unsigned _width;
	unsigned _height;
	NSString* _identifier;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) unsigned width;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned height;                         //@synthesize height=_height - In the implementation block
-(unsigned)width;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 width:(unsigned)arg3 height:(unsigned)arg4 ;
-(unsigned)height;
-(NSURL *)url;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithICImage:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 url:(id)arg2 ;
@end

