/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) Class layoutClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)width;
-(Class)layoutClass;
-(void)setWidth:(double)arg1 ;
-(NSArray *)links;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLinks:(NSArray *)arg1 ;
@end

