/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIDropProposal : NSObject <NSCopying> {

	BOOL _precise;
	BOOL _prefersFullSizePreview;
	unsigned long long _operation;
	long long _preferredBadgeStyle;

}

@property (assign,nonatomic) unsigned long long operation;                                                                           //@synthesize operation=_operation - In the implementation block
@property (assign,setter=_setPreferredBadgeStyle:,getter=_preferredBadgeStyle,nonatomic) long long preferredBadgeStyle;              //@synthesize preferredBadgeStyle=_preferredBadgeStyle - In the implementation block
@property (assign,getter=isPrecise,nonatomic) BOOL precise;                                                                          //@synthesize precise=_precise - In the implementation block
@property (assign,nonatomic) BOOL prefersFullSizePreview;                                                                            //@synthesize prefersFullSizePreview=_prefersFullSizePreview - In the implementation block
+(id)new;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)operation;
-(void)setOperation:(unsigned long long)arg1 ;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(BOOL)isPrecise;
-(void)setPrecise:(BOOL)arg1 ;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
-(long long)_preferredBadgeStyle;
-(void)_setPreferredBadgeStyle:(long long)arg1 ;
@end

