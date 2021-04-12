/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
*/


#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
@interface DOCThumbnailDescriptor : NSObject {

	BOOL _folded;
	BOOL _interactive;
	double _minimumSize;
	double _scale;
	unsigned long long _style;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double minimumSize;                                 //@synthesize minimumSize=_minimumSize - In the implementation block
@property (nonatomic,readonly) double scale;                                       //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                           //@synthesize style=_style - In the implementation block
@property (getter=isFolded,nonatomic,readonly) BOOL folded;                        //@synthesize folded=_folded - In the implementation block
@property (getter=isInteractive,nonatomic,readonly) BOOL interactive;              //@synthesize interactive=_interactive - In the implementation block
-(CGSize)size;
-(double)scale;
-(BOOL)isInteractive;
-(double)minimumSize;
-(unsigned long long)hash;
-(unsigned long long)style;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3 isFolded:(BOOL)arg4 isInteractive:(BOOL)arg5 ;
-(id)initWithSize:(CGSize)arg1 minimumSize:(double)arg2 scale:(double)arg3 style:(unsigned long long)arg4 isFolded:(BOOL)arg5 isInteractive:(BOOL)arg6 ;
-(id)initWithScale:(double)arg1 style:(unsigned long long)arg2 isFolded:(BOOL)arg3 isInteractive:(BOOL)arg4 ;
-(BOOL)isFolded;
@end

