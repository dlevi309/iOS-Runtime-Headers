/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _DUIAccessibilityDragStatus : NSObject <NSSecureCoding> {

	BOOL _forbidden;
	long long _itemCount;
	unsigned long long _potentialOperation;

}

@property (assign,nonatomic) long long itemCount;                                //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long potentialOperation;              //@synthesize potentialOperation=_potentialOperation - In the implementation block
@property (assign,nonatomic) BOOL forbidden;                                     //@synthesize forbidden=_forbidden - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)itemCount;
-(BOOL)forbidden;
-(id)description;
-(void)setForbidden:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setItemCount:(long long)arg1 ;
-(unsigned long long)potentialOperation;
-(void)setPotentialOperation:(unsigned long long)arg1 ;
@end

