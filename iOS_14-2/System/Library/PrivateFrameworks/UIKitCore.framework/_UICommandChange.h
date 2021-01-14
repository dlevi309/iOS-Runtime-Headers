/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICommandChange : NSObject <NSCopying, NSSecureCoding> {

	id _anchor;

}

@property (nonatomic,readonly) id anchor;              //@synthesize anchor=_anchor - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)acceptBoolItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(void)acceptItemInsertionVisit:(/*^block*/id)arg1 itemDeletionVisit:(/*^block*/id)arg2 menuInsertionVisit:(/*^block*/id)arg3 menuDeletionVisit:(/*^block*/id)arg4 ;
-(id)initWithAnchor:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)anchor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

