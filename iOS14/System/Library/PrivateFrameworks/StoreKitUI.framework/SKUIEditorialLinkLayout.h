/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {

	CGSize* _sizes;
	CGSize _totalSize;
	NSArray* _links;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;                    //@synthesize totalSize=_totalSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(CGSize)totalSize;
-(NSArray *)links;
-(void)dealloc;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)sizeForLinkAtIndex:(long long)arg1 ;
@end

