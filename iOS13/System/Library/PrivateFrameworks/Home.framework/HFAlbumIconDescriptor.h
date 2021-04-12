/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFIconDescriptor.h>

@class NSData, NSString;

@interface HFAlbumIconDescriptor : NSObject <HFIconDescriptor> {

	BOOL _shouldForceLTR;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSData * imageData;                  //@synthesize imageData=_imageData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL shouldForceLTR;                 //@synthesize shouldForceLTR=_shouldForceLTR - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id)initWithImageData:(id)arg1 ;
-(NSData *)imageData;
-(BOOL)shouldForceLTR;
-(id)iconDescriptorByMergingWithIconDescriptor:(id)arg1 ;
@end

