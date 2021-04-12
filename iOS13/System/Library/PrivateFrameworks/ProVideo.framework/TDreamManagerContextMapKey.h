/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EAGLContext;

@interface TDreamManagerContextMapKey : NSObject <NSCopying> {

	EAGLContext* _ctx;

}
+(id)currentContextMapKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCTX:(id)arg1 ;
@end

