/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperation:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)operation;
-(void)setPrecise:(BOOL)arg1 ;
-(long long)_preferredBadgeStyle;
-(BOOL)prefersFullSizePreview;
-(void)setPrefersFullSizePreview:(BOOL)arg1 ;
-(void)_setPreferredBadgeStyle:(long long)arg1 ;
-(BOOL)isPrecise;
-(id)initWithDropOperation:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

