/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(void)setPrecise:(BOOL)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
-(void)setForbidden:(BOOL)arg1 ;
-(void)setPreferredBadgeStyle:(long long)arg1 ;
-(BOOL)forbidden;
-(BOOL)precise;
-(long long)preferredBadgeStyle;
@end

