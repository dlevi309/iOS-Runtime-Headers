/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXLayoutMetrics : NSObject <NSCopying> {

	CGSize _referenceSize;

}

@property (assign,nonatomic) CGSize referenceSize;                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) NSString * diagnosticDescription; 
-(void)setReferenceSize:(CGSize)arg1 ;
-(CGSize)referenceSize;
-(NSString *)diagnosticDescription;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

