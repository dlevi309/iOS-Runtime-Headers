/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIMediaLibraryContentsChange : NSObject <NSCopying> {

	unsigned long long _revision;

}

@property (assign,nonatomic) unsigned long long revision;              //@synthesize revision=_revision - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)revision;
-(id)initWithRevision:(unsigned long long)arg1 ;
@end

