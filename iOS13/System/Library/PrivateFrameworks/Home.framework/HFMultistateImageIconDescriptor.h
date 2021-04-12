/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFImageIconDescriptor.h>

@class NSDictionary;

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor {

	NSDictionary* _imageIdentifiersKeyedByPrimaryState;

}

@property (nonatomic,retain) NSDictionary * imageIdentifiersKeyedByPrimaryState;              //@synthesize imageIdentifiersKeyedByPrimaryState=_imageIdentifiersKeyedByPrimaryState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 defaultImageIdentifier:(id)arg2 ;
-(NSDictionary *)imageIdentifiersKeyedByPrimaryState;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg1 ;
-(id)imageIdentifierForPrimaryState:(long long)arg1 ;
-(void)setImageIdentifiersKeyedByPrimaryState:(NSDictionary *)arg1 ;
@end

