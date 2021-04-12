/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary;

@interface VUIMediaEntityKind : NSObject <NSCopying> {

	NSString* _mediaEntityClassName;
	NSArray* _propertyDescriptors;
	NSDictionary* _propertyDescriptorsByName;

}

@property (nonatomic,copy) NSDictionary * propertyDescriptorsByName;              //@synthesize propertyDescriptorsByName=_propertyDescriptorsByName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaEntityClassName;              //@synthesize mediaEntityClassName=_mediaEntityClassName - In the implementation block
@property (nonatomic,copy) NSArray * propertyDescriptors;                         //@synthesize propertyDescriptors=_propertyDescriptors - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMediaEntityClassName:(id)arg1 ;
-(void)setPropertyDescriptors:(NSArray *)arg1 ;
-(id)propertyDescriptorForName:(id)arg1 ;
-(id)sortingPropertyDescriptorForName:(id)arg1 ;
-(void)setPropertyDescriptorsByName:(NSDictionary *)arg1 ;
-(NSArray *)propertyDescriptors;
-(NSDictionary *)propertyDescriptorsByName;
-(NSString *)mediaEntityClassName;
@end

