/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)itemID;
-(IKViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
@end

