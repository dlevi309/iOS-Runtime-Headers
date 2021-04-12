/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <libobjc.A.dylib/NUAdLayoutOptions.h>

@protocol NUAdLayoutOptions <NSObject>
@property (nonatomic,readonly) CGSize containerSize; 
@required
-(CGSize)containerSize;

@end


@class NSString;

@interface NUAdLayoutOptions : NSObject <NUAdLayoutOptions> {

	CGSize _containerSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize containerSize;                //@synthesize containerSize=_containerSize - In the implementation block
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
@end

