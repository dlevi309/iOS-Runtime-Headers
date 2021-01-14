/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)namedTexture;
-(id)provideTextureInfo;
-(id)bufferAllocator;
-(void)setNamedTexture:(id)arg1 ;
-(id)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3 ;
-(void)setBufferAllocator:(id)arg1 ;
-(void)dealloc;
@end

