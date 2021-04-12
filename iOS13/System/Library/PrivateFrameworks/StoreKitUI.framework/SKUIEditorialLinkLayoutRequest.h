/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayoutRequest : NSObject <SKUILayoutRequest> {

	NSArray* _links;
	double _width;

}

@property (nonatomic,copy) NSArray * links;                         //@synthesize links=_links - In the implementation block
@property (assign,nonatomic) double width;                          //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(NSArray *)links;
-(Class)layoutClass;
-(void)setLinks:(NSArray *)arg1 ;
@end

