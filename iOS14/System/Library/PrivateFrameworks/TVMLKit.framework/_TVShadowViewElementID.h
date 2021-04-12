/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKViewElement, NSString;

@interface _TVShadowViewElementID : NSObject <NSCopying> {

	IKViewElement* _viewElement;
	NSString* _itemID;

}

@property (nonatomic,copy,readonly) NSString * itemID;                   //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(id)init;
-(id)description;
-(NSString *)itemID;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
@end

