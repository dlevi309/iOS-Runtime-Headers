/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPTransformOperation.h>

@protocol NSFileProviderItemFlags;
@interface FPSetFlagsOperation : FPTransformOperation {

	id<NSFileProviderItemFlags> _flags;

}
-(id)fp_prettyDescription;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithItems:(id)arg1 flags:(id)arg2 ;
@end

