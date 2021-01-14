/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libpartition2_dynamic.dylib
*/

#import <MSUDataAccessor/LPMedia.h>

@interface LPPartitionMedia : LPMedia
+(id)supportedContentTypes;
+(id)primaryMedia;
+(id)contentTypesForPartitionMedia;
-(id)children;
-(BOOL)isPrimaryMedia;
@end

