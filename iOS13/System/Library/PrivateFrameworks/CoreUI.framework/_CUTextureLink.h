/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/

#import <libobjc.A.dylib/TXRDataSourceProvider.h>

@protocol TXRBufferAllocator;
@class CUINamedTexture, NSString;

@interface _CUTextureLink : NSObject <TXRDataSourceProvider> {

	CUINamedTexture* _namedTexture;
	id<TXRBufferAllocator> _bufferAllocator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)namedTexture;
-(id)provideTextureInfo;
-(id)bufferAllocator;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(void)setNamedTexture:(id)arg1 ;
-(void)setBufferAllocator:(id)arg1 ;
@end

