/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileIdentifierConverter.h>

@class NSArray, NSString;

@interface PXComposedTileIdentifierConverter : NSObject <PXTileIdentifierConverter> {

	NSArray* _converters;

}

@property (nonatomic,copy,readonly) NSArray * converters;              //@synthesize converters=_converters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)converters;
-(BOOL)reverseTransformTileIdentifier:(PXTileIdentifier*)arg1 ;
-(BOOL)transformTileIdentifier:(PXTileIdentifier*)arg1 group:(unsigned long long*)arg2 ;
-(id)initWithTileIdentifierConverters:(id)arg1 ;
@end

