/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileIdentifierConverter.h>

@class NSString;

@interface PXTileIdentifierIdentityConverter : NSObject <PXTileIdentifierConverter>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)reverseTransformTileIdentifier:(PXTileIdentifier*)arg1 ;
-(BOOL)transformTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 ;
@end

