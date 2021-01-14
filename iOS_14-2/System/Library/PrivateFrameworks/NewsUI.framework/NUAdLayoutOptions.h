/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) CGSize containerSize;                //@synthesize containerSize=_containerSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainerSize:(CGSize)arg1 ;
-(CGSize)containerSize;
@end

