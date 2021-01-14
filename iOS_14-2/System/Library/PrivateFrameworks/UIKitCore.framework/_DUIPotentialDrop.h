/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forbidden;
	BOOL _precise;
	BOOL _prefersFullSizePreview;
	unsigned long long _operation;
	long long _preferredBadgeStyle;

}

@property (assign,nonatomic) unsigned long long operation;               //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) BOOL forbidden;                             //@synthesize forbidden=_forbidden - In the implementation block
@property (assign,nonatomic) BOOL precise;                               //@synthesize precise=_precise - In the implementation block
@property (assign,nonatomic) BOOL prefersFullSizePreview;                //@synthesize prefersFullSizePreview=_prefersFullSizePreview - In the implementation block
@property (assign,nonatomic) long long preferredBadgeStyle;              //@synthesize preferredBadgeStyle=_preferredBadgeStyle - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)precise;
-(void)setOperation:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)operation;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPrecise:(BOOL)arg1 ;
-(BOOL)forbidden;
-(id)description;
-(void)setForbidden:(BOOL)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
-(void)setPreferredBadgeStyle:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)preferredBadgeStyle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

